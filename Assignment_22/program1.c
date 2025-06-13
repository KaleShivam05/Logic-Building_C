////////////////////////////////////////////////////////////////////
//
// Name :          program1.c
// Discription :   Check whether input is alphbet or not 
// Input :         Character
// Output :        string
// Author :        Shivam Rajendra Kale
// Date :          05/06/2025
//
////////////////////////////////////////////////////////////////////

/*
  Start
    Accept input from user 
      Check whether input is alphbet or not 
       if the input is alphabet than
        Display It is Character
       if the input is nor alphabet than
        Display It is not a Character
  Stop    
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckAlphabet(char ch)
{
    BOOL bFalg = FALSE;

    if((ch >= 'A')&&(ch <= 'Z') || (ch >= 'a')&&(ch <= 'z'))
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

    bRet = CheckAlphabet(cValue);

    if(bRet == TRUE)
    {
      printf("It is Character");
    }
    else
    {
       printf("It is not a Character");
    }

    return 0;
}
