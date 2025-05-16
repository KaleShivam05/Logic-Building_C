/////////////////////////////////////////////////////////////////
//
// Name :          problem4.c
// Discription :   Chack whether input is divisible 5 or not
// Input :         integer
// Output :        integer , String
// Author :        Shivam Rajendra Kale
// Date :          11/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept input from user
          if input is divisible 5 then
            Display Divisible by 5
          if input is not Divisible 5 then
            Display not Divisible by 5  
       
    Stop         
*/

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE -1

int Check(int iNo)
{
    if((iNo % 5) == 0)
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

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("\n Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }

    return 0;
}