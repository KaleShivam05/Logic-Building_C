/////////////////////////////////////////////////////////////////
//
//  File name :     program216.c
//  Descreption :   Addition of two numbers
//  Author :        Shivam Rajendra Kale
//  Date :          04/08/2025
//
//////////////////////////////////////////////////////////////////


#include<stdio.h>

int Addition()
{
    int i = 1;
    int iSum = 0;

    while(i <= 5)
    {
        iSum = iSum + i;
        i++;
    }

    return iSum;
}

int main()
{
    int iRet = 0;

    iRet = Addition();

    printf("Addition is : %d\n",iRet);

    return 0;
}