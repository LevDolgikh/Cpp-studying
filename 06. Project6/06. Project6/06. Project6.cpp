// Date: 04.09.2021
// Created by: Lev Dolgikh 

// Проект #6
// Рассматривается рекурсия, указатели, арифметика указателей

#include <iostream>
int fact(int a);

int fact(int a)
{
    // Вычисление факториала
    int f = 1;

    if (a != 0)
    {
        f = a * fact(a - 1);
    }
    else
    {
        f = 1;
    } 

    return f;
}

int main()
{
    setlocale(LC_ALL, "RUS");

    // Расчет факториала рекурсией
    std::cout << "Факториал 5 равен: " << fact(5) << std::endl << std::endl;

    // Указатели
    int a;
    a = 5;
    int* pointer_a = &a;
    std::cout << "Содержиться в указатели следующее: " << pointer_a << std::endl;
    std::cout << "Содержиться в указатели следующее(после разоменования): " << *pointer_a << std::endl;
    
    // Арифметика указателей
    int const SIZE_ARR1 = 4;
    int arr[]{ 4,5,6,7 };
    int* p_arr = arr;

    std::cout << "\nДоступ к массиву по указателю: ";
    for (int i = 0; i < SIZE_ARR1; i++)
    {
        std::cout << *(p_arr + i) << " ";
    }
}


