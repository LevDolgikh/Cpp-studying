// Date: 13.09.2021
// Created by: Lev Dolgikh 


// Первые шаги изучения C++ 
// Рассматриваются работа с динамической памятью

#include <iostream>
#include <time.h>

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "RUS");

    // Выделение динамической памяти (код бессмыселен но суть верна)
    int *pa = new int;
    *pa = 10;
    std::cout << "Значение в динамической памяти" << *pa << std::endl;
    delete pa; // Удаляем данные
    pa = nullptr; // Чистим указатель

    // Работа с динамическими масивами

    int size = 10;
    int *b = new int[size];

    for (int i = 0; i < size; i++)
    {
        b[i] = rand() % 100;
    }

    std::cout << "Содержание динамического массива:" << std::endl;
    std::cout << "значение" << "\t" << "адресс" << std::endl;

    for (int i = 0; i < size; i++)
    {
        std::cout << b[i] << "\t\t";
        std::cout << b+i << std::endl;
    }

    delete [] b;
    b = nullptr;
}


