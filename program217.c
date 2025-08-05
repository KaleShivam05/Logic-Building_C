/////////////////////////////////////////////////////////////////
//
//  File name :     program217.c
//  Descreption :   Use Recursion 
//  Author :        Shivam Rajendra Kale
//  Date :          04/08/2025
//
//////////////////////////////////////////////////////////////////


#include<stdio.h>

int Addition()
{
    static int i = 1;
    static int iSum = 0;

    if(i <= 5)
    {
        iSum = iSum + i;
        i++;
        Addition();
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