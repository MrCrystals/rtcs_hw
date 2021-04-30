/********************************************************************************************************
*                                               Coded by MCS                                            *
*                         Khomenko Sergey IABO-01-19, 2021, Visual Studio 19 (C++)                      *
*                                   Real-time computing systems: lab 5                                  *
*                                  (description of functions in header)                                 *
*********************************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include "lab_5.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Lab_5_1()
{
	const int Length = 20;
	const int n = 5;

	const int rndmin = 0;
	const int rndmax = 11;

	srand(time(0));

	int* arr = (int*)malloc(Length * sizeof(int));
	int i;

	printf("Source array (length = %i):\n", Length);

	for (i = 0; i < Length; i++)
	{
		arr[i] = rand() % rndmax + rndmin;
		printf("%3i", arr[i]);
	}

	CalcArr(arr, Length, n);

	printf("\n\nModified array (n = %i):\n", n);

	for (i = 0; i < Length; i++)
		printf("%3i", arr[i]);

	free(arr);
}

void CalcArr(int* arr, int len, int n)
{
	for (int i = 0, s = len - 1, t; i < len && i != s; i++)
		if (arr[i] >= n)
		{
			t = arr[i];
			arr[i] = arr[s];
			arr[s] = t;
			s--;
			i--;
		}
}