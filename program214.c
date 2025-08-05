/////////////////////////////////////////////////////////////////
//
//  File name :     program214.c
//  Descreption :   Use Recursion 
//  Author :        Shivam Rajendra Kale
//  Date :          04/08/2025
//
//////////////////////////////////////////////////////////////////


#include<stdio.h>

void Display()
{
    static int i = 1;

    if(i <= 5)
    {
        printf("Jay Ganesh... : %d \n",i);
        i++;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}