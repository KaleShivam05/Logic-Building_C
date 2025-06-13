/////////////////////////////////////////////////////////////////////////
//
// Name :          program3.c
// Discription :   Check whether input is small case or not  
// Input :         Integer
// Output :        string
// Author :        Shivam Rajendra Kale
// Date :          05/06/2025
//
//////////////////////////////////////////////////////////////////////////

/*
   Start
      Accept input from user 
         Check whether input is Small case or not 
            if the input is Small case than
               Display It is Small case Character
            if the input is not Small case than
               Display It is not a Small case Character
    Stop         
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckSmallCase(char ch)
{
    BOOL bFalg = FALSE;

    if((ch >= 'a') && (ch <= 'z'))
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

    bRet = CheckSmallCase(cValue);

    if(bRet == TRUE)
    {
      printf("It is Small case Characte");
    }
    else
    {
       printf("It is not a Small case Character");
    }

    return 0;
}
