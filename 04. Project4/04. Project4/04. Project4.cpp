// Date: 02.09.2021
// Created by: Lev Dolgikh 


// Проект #4
// Рассматриваются массивы чисел, функция sizeof, случайные числа

#include <iostream>
#include <ctime>

int main()
{
    setlocale(LC_ALL, "RUS");

    // Заполнение и вывод цикла
    int arr[4];
    std::cout << "В массиве находятся: ";
    for (int i = 0; i < 4; i++)
    {
        arr[i] = i;
        std::cout << arr[i] << " ";
    }

    // sizeof
    int leng = sizeof(arr) / sizeof(int); // таким образом определяется длина массива
    std::cout << "\nДлина массива: " << leng << std::endl;

    // rand, srand
    srand(time(NULL)); // задание начальной точки генерации случайных чисел
    int rand_arr[10];
    std::cout << "\nМассив случайных чисел: ";
    for (int i = 0; i < sizeof(rand_arr) / sizeof(rand_arr[0]); i++)
    {
        rand_arr[i] = rand() % 100; // случайные числа от 0 до 100 (изначально генерирует от 0 до 32767, но мы берем остаток от деления, поэтому получается от 0 до 100)
        std::cout << rand_arr[i] << " ";
    }

    // Сортировка
    int min_index = 0;
    int temp = 0;
    for (int i = 0; i < sizeof(rand_arr) / sizeof(rand_arr[0]); i++)
    {
        for (int j = i; j < sizeof(rand_arr) / sizeof(rand_arr[0]); j++)
        {
            if (rand_arr[j] < rand_arr[min_index])
            {
                min_index = j;
            }
        }
        if (min_index != i)
        {
            temp = rand_arr[i];
            rand_arr[i] = rand_arr[min_index];
            rand_arr[min_index] = temp;
        }
    }

    // Вывод результаты сортировки
    std::cout << "\nОтсортированный массив: ";
    for (int i = 0; i < sizeof(rand_arr) / sizeof(rand_arr[0]); i++)
    {
        std::cout << rand_arr[i] << " ";
    }

    // Двумерные массивы 
    const int ROW = 2;
    const int COL = 2;
    std::cout << "\n\nДвумерный массив: " << std::endl;
    int one_more_arr[ROW][COL]
    { 
        {5,5}, 
        {6,6} 
    };

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            std::cout << one_more_arr[i][j] << "\t";
        }
        std::cout << "\n";
    }

}

