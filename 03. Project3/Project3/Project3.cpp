// Date: 30.08.2021
// Created by: Lev Dolgikh 


// Проект #3
// Рассматриваются циклы while, do-while и for

#include <iostream>

int main()
{
    setlocale(LC_ALL, "RUS");
    
    // Цикл while
    int a = 0;
    while (a < 10) 
    {
        std::cout << "Переменная a = " << a << std::endl;
        a++;
    }

    // Цикл do-while
    do
    {
        std::cout << "Переменная a = " << a << std::endl;
        a++;
    } while (a < 20);

    // Цикл for
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Переменаня цикла for i = " << i << std::endl;
    }
}
