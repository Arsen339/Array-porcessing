
/*Создать функцию для поиска положения первого положительного элемента произвольного массива целых чисел. Вернуть указатель на положительный элемент.
Тестовая программа:
⦁	Создать и инициализировать 2 массива A[N1], B[N2]
⦁	Найти положение положительного элемента массива. Полученный указатель разделяет массив на 2 части.
⦁	Определить количество элементов в первой и второй частях массива
⦁	Пункты 2 и 3 выполнить для массивов A и B*/




#include <iostream>

#include <iostream>
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <clocale>
#define N1 10
#define N2 15
int* positelem(int* p, int n)
{
    int* r;
    int i = 0;
    while (*(p + i) < 0) {
        i++;

    }

    r = &i;

    return  r;
}


using namespace std;
int main() {
    srand(time(0));
    setlocale(0, "Russian");

    int* k;
    int arr[N1], s;
    int i;

    for (k = arr; k < arr + N1; k++)
        *k = rand() % 30 - 20;

    int* f;
    int mass[N2];
    for (f = mass; f < mass + N2; f++)
        *f = rand() % 30 - 20.;

    cout << "Первый массив" << endl;
    for (k = arr, i = 0; k < arr + N1; k++, i++)
    {
        printf("%d", *k);
        cout << endl;

    }


    cout << "Второй массив" << endl;
    for (f = mass, i = 0; f < mass + N2; f++, i++)
    {
        printf("%d", *f);
        cout << endl;

    }

    cout << endl;
    cout << "Первый положительный элемент первого массива " << *positelem(arr, N1) << endl;
    cout << "Первый положительный элемент второго массива " << *positelem(mass, N2) << endl;
    cout << "Первая часть певрого массива имеет " << *positelem(arr, N1) << " элементов, вторая  " << N1 - *positelem(arr, N1) - 1 << endl;
    cout << "Первая часть второго массива имеет " << *positelem(mass, N2) << " элементов, вторая  " << N2 - *positelem(mass, N2) - 1 << endl;

    return 0;
}
