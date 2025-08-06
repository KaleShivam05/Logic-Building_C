/////////////////////////////////////////////////////////////////
//
//  File name :     program224.c
//  Descreption :   Use Recursion 
//  Author :        Shivam Rajendra Kale
//  Date :          05/08/2025
//
//////////////////////////////////////////////////////////////////


#include<stdio.h>

int Factorial(int iNo)
{
    static int iSum = 1;

    if(iNo > 1)
    {
        iSum = iSum * iNo;
        Factorial(iNo-1);
    }

    return iSum;
}

int main()
{
    int iRet = 0;
    int iValue = 4;

    iRet = Factorial(iValue);

    printf("Factorial is : %d\n",iRet);

    return 0;
}