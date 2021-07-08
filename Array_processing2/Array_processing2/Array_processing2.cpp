/*Дана целочисленная матрица 8x12
Создать функцию, которая возвращает максимум области  (+)
o+
+o

*/

#include <iostream>

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

int maximum(int** p, int a, int b)
{
	int max = p[0][0];
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			if (i <= a / 2 && j >= b / 2 && j != b - 1)
				if (max < p[i][j])
					max = p[i][j];
				else if (i > a / 2 && j <= b / 2 && j != b / 2 - 1)
					if (max < p[i][j])
						max = p[i][j];
		}
	}
	return max;
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
	printf("%d\n", maximum(arr, W, Q));
	return 0;
}
