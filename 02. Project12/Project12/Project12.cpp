// Date: 30.08.2021
// Created by: Lev Dolgikh 


// Второй проект по обучению C++
// Рассматриваются константы, инкремент и декремент, логические операции, условия

#include <iostream>

int main()
{
    setlocale(LC_ALL, "RUS");

    // Константы
    const float DAYS_IN_YEAR = 365;
    const int DAYS_IN_WEEK = 7;
    std::cout << "Дней в году: " << DAYS_IN_YEAR << "\nДней в неделю: " << DAYS_IN_YEAR;

    // Инкремент и декремент
    int a;
    a = 0;
    a++;
    std::cout << "\n\nЗначение переменной а = " << a << std::endl;
    std::cout << "Значение переменной а++: " << a++ << std::endl;
    std::cout << "Значение переменной ++а: " << ++a << std::endl;

    // Сравнение и логические операции
    int value;

    std::cout << "\nВведите целое число, мы проверим его на четность" << std::endl;
    std::cin >> value;

    if (value % 2 == 0)
    {
        std::cout << "Число четное" << std::endl;
    }
    else
    {
        std::cout << "Число не четное" << std::endl;
    }

    // Оператор множественного выбора switch
    std::cout << std::endl;

    int switch_value;
    switch_value = 3;

    switch (switch_value)
    {
    case 1:
        std::cout << "switch_value = 1" << std::endl;
        break;
    case 2:
        std::cout << "switch_value = 2" << std::endl;
        break;
    case 3:
        std::cout << "switch_value = 3" << std::endl;
        break;
    default:
        std::cout << "Не знаю, что за число" << std::endl;
        break;
    }

}
