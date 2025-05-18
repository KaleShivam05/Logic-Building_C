/////////////////////////////////////////////////////////////////
//
// Name :          program3.c
// Discription :   Check number Even
// Input :         integer
// Output :        integer
// Author :        Shivam Rajendra Kale
// Date :          18/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept input from user
          Check even factorial than
            Display multiplication of even factorial
    Stop                  
*/

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0, iMulti = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iMulti = iMulti * iCnt;
        }
    }
    return iMulti;
    
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even factorial of number is :%d",iRet);

    return 0;
}