#include "lab_1.h"
#include "lab_2.h"

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void copyright();

int main()  //launcher main menu
{
    int inp = -1;

    while (inp != 0)
    {
        copyright();

        printf("------------------------MENU------------------------\n");

        printf(" 1 - Lab 1\n");
        printf("11 - Lab 1 triangle\n");
        printf("21 - Lab 2 task 1\n");
        printf("22 - Lab 2 task 2\n");

        printf(" 0 - Exit\n");
        printf("----------------------------------------------------\n>");

        scanf_s("%i", &inp);

        switch (inp)
        {
        case 1:
            copyright();
            printf("========================== LAB 1 ==========================\n");
            Lab1();
            printf("\n======================== END LAB 1 ========================\n");
            break;

        case 11:
            copyright();
            printf("========================== LAB 1_1 ==========================\n");
            Lab11();
            printf("\n======================== END LAB 1_1 ========================\n");
            break;

        case 21:
            copyright();
            printf("========================== LAB 2_1 ==========================\n");
            Lab21();
            printf("\n======================== END LAB 2_1 ========================\n");
            break;

        case 22:
            copyright();
            printf("========================== LAB 2_2 ==========================\n");
            Lab22();
            printf("\n======================== END LAB 2_2 ========================\n");
            break;

        default:
            printf("Wrong number!\n");
            break;
        }
        _getch();
        system("cls");
    }

    return 0;
}

void copyright()
{
    system("cls");
    printf("Real-time computing systems labs launcher by MCS (Khomenko Sergey IABO-01-19)\n\n");
}