/////////////////////////////////////////////////////////////////
//
//  File name :     program218.c
//  Descreption :   Use Recursion 
//  Author :        Shivam Rajendra Kale
//  Date :          04/08/2025
//
//////////////////////////////////////////////////////////////////


#include<stdio.h>

int Factorial()
{
    static int i = 1;
    static int iSum = 1;

    if(i <= 5)
    {
        iSum = iSum * i;
        i++;
        Factorial();
    }

    return iSum;
}

int main()
{
    int iRet = 0;

    iRet = Factorial();

    printf("Factorial is : %d\n",iRet);

    return 0;
}