#pragma once
#include <istream>
#ifndef TQUEQUE_H
#define TQUEQUE_H
#endif // !TQUEQUE_H

using namespace std;

template <class T>
class TStack {
protected:
	int size;
	int top;
	T* mas;
public:
	TStack() {
		size = 0;
		top = -1;
		mas = nullptr;
	}
	TStack(int _size = 0) {
		if (_size < 0) throw "error";
		top = -1;
		size = _size;
		mas = new T[size];
		for (int i = 0; i < size; i++) mas[i] = 0;
	}
	//TStack(int _size = 10, int _top = 0, T* pMem);

	//TStack(int _size, int _top);
	TStack(TStack<T>& stack) {
		top = stack.top;
		size = stack.size;
		mas = new T[size];
		for (int i = 0; i < size; i++) mas[i] = stack.mas[i];
	}
	~TStack() { delete mas; }

	int GetSize()
	{
		return top + 1;
	}

	T GetTop()
	{
		if (top < 0) throw "error";
		return mas[top];
	}

	T Pop() {
		if (IsEmpty()) {
			throw "Stack is empty";
		}
		return mas[top--];
		//return mas[top--];
	}
	void Push(double elem) {
		if (IsFull()) {
			throw - 1;
		}
		//pMem[top] = elem;
		//top++;
		mas[++top] = elem;
	}
	bool IsEmpty() { return top + 1 == 0; }


	bool IsFull() { return top + 1 == size; }

	void Clear() { for (int i = 0; i < size; i++) mas[i] = 0; }

	T Get() {
		if (IsEmpty()) {
			throw - 1;
		}
		top--;
		return mas[top];
	}

	TStack& operator=(const TStack<T>& stack) {
		if (&stack == this) return *this;
		size = stack.size;
		top = stack.top;
		delete[] mas;
		mas = new T[size];
		for (size_t i = 0; i < size; i++) mas[i] = stack.mas[i];
		return *this;
	}
};

template <class T>
class TQueue: public TStack<T> {
protected:
	int size;      //размер
	int start;    //начало очереди
	int end;     //конец очереди
	int count;  //количество элементов - ?
	T* mas;

public:
	TQueue(int size = 0);
	TQueue(TQueue <T>& q);
	~TQueue();

	void Push(T a);
	T Get();

	bool IsFull();
	bool IsEmpty();

	int GetSize();
	int GetHead();
	int GetMaxSize();


	friend istream& operator>>(istream& is, TQueue<T>& q);
	friend ostream& operator<<(ostream& os, const TQueue<T>& q);

};


