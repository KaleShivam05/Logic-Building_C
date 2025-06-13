/////////////////////////////////////////////////////////////////////////
//
// Name :          program3.c
// Discription :   Check whether input is special Characte or not
// Input :         Integer
// Output :        string
// Author :        Shivam Rajendra Kale
// Date :          06/06/2025
//
//////////////////////////////////////////////////////////////////////////

/*
   Start
      Accept input from user 
         Check whether input is special Characte or not 
            if the input is special Characte than
               Display It is special Characte Character
            if the input is not special Characte than
               Display It is not a special Characte Character
    Stop         
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckSpecial(char ch)
{
    BOOL bFalg = TRUE;

    if((ch >= 'a') && (ch <= 'z'))
    {
       bFalg = FALSE;
    }
    else if((ch >= 'A') && (ch <= 'Z'))
    {
      bFalg = FALSE;
    }

    return bFalg;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character :");
    scanf("%c",&cValue);

    bRet = CheckSpecial(cValue);

    if(bRet == TRUE)
    {
      printf("It is special Characte");
    }
    else
    {
       printf("It is not a special Character");
    }

    return 0;
}
