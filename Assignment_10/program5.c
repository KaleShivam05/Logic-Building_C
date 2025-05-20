////////////////////////////////////////////////////////////////////
//
// Name :          program5.c
// Discription :   Display difference sum of even and sum of odd
// Input :         Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          20/05/2025
//
////////////////////////////////////////////////////////////////////

/*
    Start
        Accept input from user
            Check Even or odd digits than
             do Summation of even numbers & odd numbers
              Display  Difference between summation of even & odd numbers
    Stop                  
*/

#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0, iCount1 = 0, iCount2 = 0, iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        
        if((iDigit % 2) == 0)
        {
            iCount1 = iCount1 + iDigit;
        }
        else
        {
            iCount2 = iCount2 + iDigit;
        }
    }

    iDiff = iCount1 - iCount2;

    return iDiff;
    
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);   //function call

    printf("%d",iRet);

    return 0;
}