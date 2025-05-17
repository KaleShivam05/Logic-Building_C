/////////////////////////////////////////////////////////////////
//
// Name :          program3.c
// Discription :   Find factorial of number
// Input :         integer
// Output :        integer 
// Author :        Shivam Rajendra Kale
// Date :          14/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept number from user 
            find factorial of number than
              Display factorial
    Stop
             
*/

#include<stdio.h>

int factorial(int iNo)
{
    int iCnt = 0, iMulti = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iMulti = iMulti * iCnt;
    }

    return iMulti;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = factorial(iValue);

    printf("Factorial of number is :%d",iRet);

    return 0;
}