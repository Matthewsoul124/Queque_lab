#include <iostream>
#include <cstdlib>
#include "Queque.h"

int main() {
    int maxSize, start_size;
    double add_ver, get_ver;

    std::cout << "Enter the maximum size: ";
    std::cin >> maxSize;

    std::cout << "Enter the start size: ";
    std::cin >> start_size;

    std::cout << "Enter the add_ver: ";
    std::cin >> add_ver;

    std::cout << "Enter the get_ver: ";
    std::cin >> get_ver;


    TQueue<int> q(maxSize);

    int addedCount = 0, extractedCount = 0;

    for (int i = 0; i < start_size; ++i) {
        if (rand() / static_cast<double>(RAND_MAX) < add_ver) {
            // Проверка, что очередь не полна перед добавлением элемента
            if (!q.IsFull()) {
                // Попытка добавления элемента в очередь
                q.Push(i);
                ++addedCount;
            }
            else {
                std::cout << "Queue is full. Cannot push element.\n";
            }
        }
    }

    for (int i = 0; i < start_size; ++i) {
        if (rand() / static_cast<double>(RAND_MAX) < get_ver) {
            // Попытка извлечения элемента из очереди
            if (!q.IsEmpty()) {
                q.Get();
                ++extractedCount;
            }
            else {
                std::cout << "Queue is empty. Cannot get element.\n";
            }
        }
    }

    // Вывод результатов
    std::cout << "Added elements: " << addedCount << std::endl;
    std::cout << "Extracted elements: " << extractedCount << std::endl;

    return 0;
}