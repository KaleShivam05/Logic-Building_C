/////////////////////////////////////////////////////////////////
//
// Name :          problem1.c
// Discription :   Check whether number is even or odd
// Input :         integer
// Output :        integer , String
// Author :        Shivam Rajendra Kale
// Date :          12/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept Number from User
         Check number is Even or Odd
           if number is even then
             Display number is Even
           if number is not Even then
             Display number is Odd
    Stop         
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number :");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if(bRet == TRUE)
    {
        printf("%d is Even number",iValue);
    }
    else
    {
        printf("%d is Odd number",iValue);
    }

    return 0;
}