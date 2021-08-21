// Date: 21.08.2021
// Created by: Lev Dolgikh 


// Первые шаги изучения C++ 
// Рассматриваются вопросы: ввывод в консоль информации, проведение простых математический операций, считывание с клавиатуры, дробный тип чисел.


#include <iostream> // Заголовок поддерживающий систему ввода - вывода

int main()
{
    // Русский в консоле
    setlocale(LC_CTYPE, "rus"); // вызов функции настройки локали

    // Вывод информации в консоль
    std::cout << "Hello World!\n" << std::endl;

    // Создание переменной и вывод переменной на экран
    int a;
    a = 7;
    std::cout << "А это число: " << a << std::endl << std::endl;

    // Различные операции с числами
    int x, y;
    x = 10;
    y = 5;
    std::cout << "Операции с числами x = " << x << " y = " << y << ":" << std::endl;
    std::cout << "Сложение x + y = " << x + y << std::endl;;
    std::cout << "Вычитание x - y = " << x - y << std::endl;;
    std::cout << "Умножение x * y = " << x * y << std::endl;;
    std::cout << "Деление x / y = " << x / y << std::endl;;
    std::cout << "Остаток от деления x % y = " << x % y << std::endl << std::endl;

    // Считывание с клавиатуры
    std::cout << "Введите 2 числа, которые вы хотите что бы я умножил\n";
    std::cout << "Введите x: ";
    std::cin >> x;
    std::cout << "Введите y: ";
    std::cin >> y;
    std::cout << "Результат умножения: " << x * y << std::endl << std::endl;

    // Дробный тип чисел
    std::cout << "Созданим 2 переменных разных типов(int и double), поместим в них значение 10, разделим на 3, итого:" << std::endl;
    int intVar;
    double doubleVar;
    intVar = 10;
    doubleVar = 10;
    std::cout << "Integer 10/3 = " << intVar / 3 << std::endl;
    std::cout << "Double 10/3 = " << doubleVar / 3 << std::endl;
    std::cout << "Удивительный результат!" << std::endl;

    return 0;
}
