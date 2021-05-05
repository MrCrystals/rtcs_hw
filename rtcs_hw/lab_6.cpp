/********************************************************************************************************
*                                               Coded by MCS                                            *
*                         Khomenko Sergey IABO-01-19, 2021, Visual Studio 19 (C++)                      *
*                                   Real-time computing systems: lab 6                                  *
*                                  (description of functions in header)                                 *
*********************************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include "lab_6.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Lab_6_1()
{
	//task 1
	const int Nmin = 6;
	const int Nmax = 13;
	const int Mmin = 4;
	const int Mmax = 9;
	const int Vmin = 0;
	const int Vmax = 51;

	srand(time(0));

	int** ar;
	int* mas;
	int i, j;
	int n = rand() % Nmax + Nmin;

	ar = (int**)malloc(n * sizeof(int*));
	mas = (int*)malloc(n * sizeof(int));
	
	for (i = 0; i < n; i++)
	{
		mas[i] = rand() % Mmax + Mmin;
		ar[i] = (int*)malloc(mas[i] * sizeof(int));

		for (j = 0; j < mas[i]; j++)
			ar[i][j] = rand() % Vmax + Vmin;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < mas[i]; j++)
			printf("%3i", ar[i][j]);
		printf("\n");
		free(ar[i]);
	}
	free(ar);

	//task 2-5:


	//2
	int la = rand() % Nmax + Nmin;
	int* a = (int*)calloc(la, sizeof(int));
	int lb = rand() % Nmax + Nmin;
	int* b = (int*)malloc(lb * sizeof(int));

	//3
	printf("\n\nArray A (address = %i):\n", a);
	for (i = 0; i < la; i++)
		printf("%3i", a[i]);

	printf("\nArray B (address = %i):\n", b);
	for (i = 0; i < lb; i++)
		printf("%3i", b[i]);

	//4
	a = (int*)realloc(a, 200 * sizeof(int));
	b = (int*)realloc(b, 50 * sizeof(int));

	//5
	printf("\n\nAddress A = %i\nAddress B = %i", a, b);

	//6
	a = (int*)realloc(a, 50 * sizeof(int));
	b = (int*)realloc(b, 200 * sizeof(int));

	printf("\n\nAddress A = %i\nAddress B = %i", a, b);

	free(a);
	free(b);
}