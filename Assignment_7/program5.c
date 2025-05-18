/////////////////////////////////////////////////////////////////
//
// Name :          program5.c
// Discription :   Check Difference
// Input :         integer
// Output :        integer
// Author :        Shivam Rajendra Kale
// Date :          18/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept input from user
            Check even or numbers
               do munliplication of even numbers
               do multiplication of odd numbers
                    Display Difference  
    Stop                  
*/

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0, iMulti1 = 1, iMulti2 = 1, iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iMulti1 = iMulti1 * iCnt;
        }
        else
        {
            iMulti2 = iMulti2 * iCnt;
        }
    }

    iDiff = iMulti1 - iMulti2;

    return iDiff;
    
}

int main()
{
   int iValue = 0, iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Difference is :%d",iRet);

    return 0;
}