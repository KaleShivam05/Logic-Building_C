/////////////////////////////////////////////////////////////////////////
//
// Name :          program2.c
// Discription :   Check whether input is Capital or not 
// Input :         Character
// Output :        string
// Author :        Shivam Rajendra Kale
// Date :          05/06/2025
//
//////////////////////////////////////////////////////////////////////////

/*
    Start
      Accept input from user 
         Check whether input is Capital or not 
            if the input is Capital than
               Display It is Capital Character
            if the input is not Capital than
               Display It is not a Capital Character
    Stop             
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckCapital(char ch)
{
    BOOL bFalg = FALSE;

    if((ch >= 'A') && (ch <= 'Z'))
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

    bRet = CheckCapital(cValue);

    if(bRet == TRUE)
    {
      printf("It is Capital Character");
    }
    else
    {
       printf("It is not a Capital Caracter");
    }

    return 0;
}
