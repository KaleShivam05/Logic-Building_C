/////////////////////////////////////////////////////////////////
//
// Name :          program4.c
// Discription :   Check number odd
// Input :         integer
// Output :        integer
// Author :        Shivam Rajendra Kale
// Date :          18/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept input from user
            Check odd factorial than
                Display multiplication of odd factorial
           
    Stop                  
*/

#include<stdio.h>

int OddFactorial(int iNo)
{
     int iCnt = 0, iMulti = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
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

    iRet = OddFactorial(iValue);

    printf("Even factorial of number is :%d",iRet);
    

    return 0;
}