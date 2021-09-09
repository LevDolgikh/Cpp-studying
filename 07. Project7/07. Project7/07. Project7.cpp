// Date: 09.09.2021
// Created by: Lev Dolgikh 

// Проект #7
// 
// Рассматривается использование указателей и ссылок

#include <iostream>

void func_a(int* pa, int* pb)
{
    (*pa)++;
    (*pb) = (*pb) + 5;
}

void func_b(int& refc)
{
    refc++;
}

int main()
{
    setlocale(LC_ALL, "RUS");

    // Передача указателей в функцию и работа со значениями, по данным указателям
    int a = 0, b = 0;
    int* pa = &a;
    int* pb = &b;

    std::cout << "Переменные a и b до преобразования: " << a << " " << b << std::endl;
    func_a(pa, pb);
    std::cout << "Переменные a и b после преобразования: " << a << " " << b << std::endl;

    // Работа с ссылками
    int c = 555;
    int& refc = c;

    std::cout << "Значение ссылки c до работы функции : " << refc << std::endl;
    func_b(refc);
    std::cout << "Значение ссылки c после работы функции : " << refc << std::endl;

}

