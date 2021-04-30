/********************************************************************************************************
*                                               Coded by MCS                                            *
*                         Khomenko Sergey IABO-01-19, 2021, Visual Studio 19 (C++)                      *
*                                Real-time computing systems: labs launcher                             *
*********************************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)

#include "lab_1.h"
#include "lab_2.h"
#include "lab_3.h"
#include "lab_4.h"
#include "lab_5.h"
#include "lab_6.h"

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void copyright();
void clear();

int main()  //launcher main menu
{
    int inp = -1;

    while (inp != 0)
    {
        copyright();

        printf("------------------------MENU------------------------\n");

        printf(" 11 - Lab 1: triangle\n");
        printf(" 12 - Lab 1: formula (5)\n\n");
        printf(" 21 - Lab 2: geometric figure (5)\n");
        printf(" 22 - Lab 2: formula (2)\n\n");
        printf(" 31 - Lab 3: array (1)\n\n");
        printf(" 41 - Lab 4: matrix (2)\n\n");
        printf(" 51 - Lab 5: array (29)\n\n");
        printf(" 61 - Lab 6: array\n\n");

        printf(" 0 - Exit\n");
        printf("----------------------------------------------------\n>");

        scanf("%i", &inp);

        switch (inp)
        {
        case 0:
            printf("\nGood bye.");
            return 0;

        case 11:
            copyright();
            printf("========================== LAB 1: Triangle ==========================\n");
            Lab_1_1();
            break;

        case 12:
            copyright();
            printf("===================== LAB 1: Formula (5 variant) ====================\n");
            Lab_1_2();
            break;

        case 21:
            copyright();
            printf("================ LAB 2: Geometric figure (5 variant) ================\n");
            Lab_2_1();
            break;

        case 22:
            copyright();
            printf("===================== LAB 2: Formula (2 variant) ====================\n");
            Lab_2_2();
            break;

        case 31:
            copyright();
            printf("====================== LAB 3: Array (1 variant) =====================\n");
            Lab_3_1();
            break;

        case 41:
            copyright();
            printf("====================== LAB 4: Matrix (2 variant) ====================\n");
            Lab_4_1();
            break;

        case 51:
            copyright();
            printf("====================== LAB 5: Array (29 variant) ====================\n");
            Lab_5_1();
            break;

        case 61:
            copyright();
            printf("====================== LAB 6: Array (29 variant) ====================\n");
            Lab_6_1();
            break;

        default:
            printf("Wrong number!");
            getch();
            clear();
            continue;
        }

        printf("\n============================= END TASK ==============================\n");
        getch();
        clear();
    }

    return 0;
}

void copyright()
{
    clear();
    printf("Real-time computing systems labs launcher by MCS (Khomenko Sergey IABO-01-19)\n\n");
}

void clear()
{
    system("cls"); // for win
}