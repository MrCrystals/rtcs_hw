#include "lab_2.h"

#include <stdio.h>

//lab 2 by MCS (Khomenko Sergey IABO-01-19)

//my variant 29 -> variant of the task 5
void Lab21()
{
	double x = 0, y = 0;

	printf("Enter X: ");
	scanf_s("%lf", &x);
	printf("Enter Y: ");
	scanf_s("%lf", &y);

	if ((y <= x + 1) && (y <= -x + 1) && (y >= x - 1) && !(x < 0 && y < 0))
		printf("The point falls into the area!\n");
	else
		printf("The point not falls into the area!\n");
}

//my variant 29 -> variant of the task 2
void Lab22()
{
	
}