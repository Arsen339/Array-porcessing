/*Дана целочисленная матрица NxM
Создать функцию, которая возвращает 2 значения :
максимум в верхней заштрихованной области и минимум в нижней.*/




#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <clocale>


#define W 8
#define Q 12

void initmass(int** arr, int N, int M)
{
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			arr[i][j] = rand() % 10;
}
void printmass(int** arr, int N, int M)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			printf("%2d ", arr[i][j]);
		printf("\n");
	}
}

int maximum(int** p, int a, int b, int num)
{
	int mas[2];
	int max = *(*p + b / 2);
	int min = *(*p + a / 2-1 );
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			if (i <= a / 2 && j >= b / 2 && j != b - 1) {
				if (max < p[i][j])
					max = p[i][j];
			}
				else if (i > a / 2 && j <= b / 2 && j != b / 2 - 1) {
					
					if (min > p[i][j]) {
						min = p[i][j];
					}
				}
		}
	}
	mas[0] = max; mas[1] = min;
		return mas[num];
}

int main()
{
	srand(time(0));
	setlocale(0, "Russian");
	int** arr;
	arr = (int**)calloc(Q, sizeof(int));
	for (int i = 0; i < Q; i++)
		*(arr + i) = (int*)calloc(W, sizeof(int));
	initmass(arr, W, Q);
	printmass(arr, W, Q);
	for (int i = 0; i < 2; i++)
		printf("max/min is %d\n", maximum(arr, W, Q, i));
	return 0;
}
