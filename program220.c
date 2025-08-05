/////////////////////////////////////////////////////////////////
//
//  File name :     program222.c
//  Descreption :   Use Recursion 
//  Author :        Shivam Rajendra Kale
//  Date :          04/08/2025
//
//////////////////////////////////////////////////////////////////


#include<stdio.h>

int Factorial(int iNo)
{
    static int i = 1;
    static int iSum = 1;

    if(i <= iNo)
    {
        iSum = iSum * i;
        i++;
        Factorial(iNo);
    }

    return iSum;
}

int main()
{
    int iRet = 0;
    int iValue = 6;

    iRet = Factorial(iValue);

    printf("Factorial is : %d\n",iRet);

    return 0;
}