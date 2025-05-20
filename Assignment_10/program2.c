/////////////////////////////////////////////////////////////////
//
// Name :          program2.c
// Discription :   Display count of odd number
// Input :         Integer
// Output :        Integer, String 
// Author :        Shivam Rajendra Kale
// Date :          20/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept number from user
           Sepret Digits & check odd numbers than
            Display Count of odd numbers    
    Stop                  
*/

#include<stdio.h>

int CheckOdd(int iNo)
{
    int iDigit = 0, iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if((iDigit % 2) != 0)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = CheckOdd(iValue);   //function call

    printf("%d",iRet);

    return 0;
}