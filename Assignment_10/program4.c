/////////////////////////////////////////////////////////////////
//
// Name :          program4.c
// Discription :   Display multiplication of all digits 
// Input :         Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          20/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept input from user
          Seprets Digit then
            Display Multiplication of Digits       
    Stop                  
*/

#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0, iCount = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        
        if(iDigit > 0)
        {
            iCount = iCount * iDigit;
        }
    }
    return iCount;
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