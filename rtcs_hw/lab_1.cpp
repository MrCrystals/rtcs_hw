#include "lab_1.h"

#include <stdio.h>
#include <math.h>

//lab 1 by MCS (Khomenko Sergey IABO-01-19)

//my variant 29 -> variant of the task 5
void Lab1()
{
	float x = 0, y = 0, t = 0;

	printf("Enter Y: ");
	scanf_s("%f", &y);
	printf("Enter T: ");
	scanf_s("%f", &t);

	printf("\nX = %7.2f", ((8 * (cos(t)/sin(t) + 2) / (exp(t) + 2) - y*y)));
}

void Lab11()
{
	float a, b, c, x, s;
	printf("Enter the hypotenuse and angle of the triangle: ");
	scanf_s("%f %f", &c, &x);
	a = c * sin(x);
	b = c * cos(x);
	s = a * b;
	printf("\nResult: a = % 7.2f b = % 7.2f S = % 7.2f", a, b, s);
}