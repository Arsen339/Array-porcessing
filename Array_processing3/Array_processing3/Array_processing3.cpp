/*Дана целочисленная матрица NxM
Создать функцию, которая формирует  одномерный массив, состоящий из сумм элементов четных строк*/
// При возникновении проблем с выводом, увеличить буфер

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <clocale>
#define W 8
#define Q 12

void initmass(int arr[], int N, int M)
{

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            arr[i * M + j] = rand() % 10;
}

void printmass(int arr[], int N, int M)
{

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++) printf("%d\t", arr[i * M + j]);
        printf("\n");
    }
}





int* sum(int* p, int a, int b, int* C) {

    int flag = 0;

    for (int i = 0; i < a; i = i + 2) {
        int s = 0;
        for (int j = 0; j < b; j++) {
            s = s + *(p + i * b + j);
        }
        *(C + flag) = s;
        flag++;
    }
    return C;

}





using namespace std;
int main() {
    srand(time(0));
    setlocale(0, "Russian");

    int arr[W * Q];
    int zz[W / 2];
    initmass(arr, W, Q);
    printmass(arr, W, Q);
    cout << "Массив из сумм" << endl;
    for (int i = 0; i < W / 2; i++)
        cout << *(sum(arr, W, Q, zz) + i) << endl;

    return 0;
}
