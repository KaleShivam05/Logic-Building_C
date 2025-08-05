/////////////////////////////////////////////////////////////////
//
//  File name :     program211.c
//  Descreption :   Use Recursion 
//  Author :        Shivam Rajendra Kale
//  Date :          31/07/2025
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
    int i = 0;

    printf("Jay Ganesh...\n");

    Display();
}

int main()
{
    Display();

    return 0;
}
