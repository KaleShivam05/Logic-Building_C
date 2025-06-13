/////////////////////////////////////////////////////////////////////////
//
// Name :          program3.c
// Discription :   Check whether input is digit or not  
// Input :         Integer
// Output :        string
// Author :        Shivam Rajendra Kale
// Date :          05/06/2025
//
//////////////////////////////////////////////////////////////////////////

/*
   Start
      Accept input from user 
         Check whether input is Digit or not 
            if the input is Digit than
               Display It is Digit Character
            if the input is not Digit than
               Display It is not a Digit Character
    Stop         
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckDigit(char ch)
{
    BOOL bFalg = FALSE;

    if((ch >= '1') && (ch <= '9'))
    {
       bFalg = TRUE;
    }

    return bFalg;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character :");
    scanf("%c",&cValue);

    bRet = CheckDigit(cValue);

    if(bRet == TRUE)
    {
      printf("It is Digit");
    }
    else
    {
       printf("It is not a Digit");
    }

    return 0;
}
