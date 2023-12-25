#include "Queque.h"
#include <iostream>

template class TQueue<int>;
using namespace std;

template<class T>
TQueue<T>::TQueue(int size): TStack<T>(size) {
	size = 0;
	start = 0;
	end = 0;
	count = 0;
	mas = new T[size];
	for (int i = 0; i < size; ++i) mas[i] = 0;
}

template<class T>
TQueue<T>::TQueue(TQueue<T>& q): TStack<T>(q) {
	size = q.size;
	start = q.start;
	end = q.end;
	count = q.count;

	mas = new T[size];
	for (int i = 0; i < size; ++i) {
		mas[i] = q.mas[i];
	}
}

template<class T>
TQueue<T>::~TQueue() {
	delete[] mas;
}

template<class T>
void TQueue<T>::Push(T a)
{
	if (!IsFull()) {
		mas[end] = a;
		end = (end + 1) % size;
		++count;
	}
	else {
		cout << "Queue is full\n";
	}
}

template<class T>
T TQueue<T>::Get()
{
	T res;
	if (!IsEmpty()) {
		res = mas[start];
		start = (start + 1) % size;
		--count;
	}
	else {
		cout << "Queue is empty\n";
		res = T();
	}
	return res;
}

template<class T>
bool TQueue<T>::IsFull() {
	return count == size;
}

template<class T>
bool TQueue<T>::IsEmpty() {
	return count == 0;
}

template<class T>
int TQueue<T>::GetSize() {
	return count;
}

template<class T>
int TQueue<T>::GetHead() {
	return start;
}

template<class T>
int TQueue<T>::GetMaxSize() {
	return size;
}

template<class T>
istream& operator>>(istream& is, TQueue<T>& q) {
	for (int i = 0; i < q.size; ++i) {
		is >> q.mas[i];
	}
	return is;
}

template<class T>
ostream& operator<<(ostream& os, const TQueue<T>& q) {
	for (int i = 0; i < q.size; ++i) {
		os << q.mas[i] << " ";
	}
	return os;
}
