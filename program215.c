/////////////////////////////////////////////////////////////////
//
//  File name :     program215.c
//  Descreption :   Use Recursion 
//  Author :        Shivam Rajendra Kale
//  Date :          04/08/2025
//
//////////////////////////////////////////////////////////////////


#include<stdio.h>

void Display()
{
    static int i = 1;

    if(i <= 3)
    {
        printf("Jay Ganesh... : %d \n",i);
        i++;
        Display();
    }
}

int main()
{
    Display();
    printf("End of main\n");
    return 0;
}