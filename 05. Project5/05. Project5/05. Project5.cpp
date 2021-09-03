// Date: 03.09.2021
// Created by: Lev Dolgikh 

// Проект #5
// Рассматриваются функции, перегрузка, прототипы функции, шаблоны

#include <iostream>

// Прототипы функций
void print_array(int arr[], int len);
void print_something(int a, int b);
int sum(int a, int b);
double sum(double a, double b);

template <typename T>
T diff(T a, T b);

int sum(int a, int b)
{
    // Суммирование целых чисел (пергрузка)
    int result;
    result = a + b;
    return result;
}

double sum(double a, double b)
{
    // Суммирование дробных чисел (пергрузка)
    double result;
    result = a + b;
    return result;
}

void print_array(int arr[], int len)
{
    // Печатает массив в консоль
    std::cout << "Массив содержит: ";
    for (int i = 0; i < len; i++)
    {
        std::cout << arr[i] << " ";
    }
}

template <typename T>
T diff(T a, T b)
{
    // Разность с использованием шаблона
    return a - b;
}


void print_something(int a = 5, int b = 6)
{
    // Функция с параметрами по умолчанию, печатает решетки
    std::cout << "\n";
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            std::cout << "#";
        }
        std::cout << "\n";
    }
}

int main()
{
    // Основная функция
    setlocale(LC_ALL, "RUS");
    int arr[] = {1,2,3,4};
    print_array(arr, sizeof(arr) / sizeof(arr[0]));
    print_something();

    // Рассмотрение перегрузки
    std::cout << "\nСуммирование с помощью перегрузки"<< std::endl;
    std::cout << "Сумируем целые числа 5 и 4: " << sum(5, 4) << std::endl;
    std::cout << "Сумируем дробные числа 1.62 и 8.66: " << sum(1.62, 8.66) << std::endl;

    // Рассмотрение шаблона
    std::cout << "\nРазница  с помощью шаблонов" << std::endl;
    std::cout << "Разница чисел 5 и 4: " << diff(5, 4) << std::endl;
    std::cout << "Разница чисел 1.62 и 8.66: " << diff(1.62, 8.66) << std::endl;

}


