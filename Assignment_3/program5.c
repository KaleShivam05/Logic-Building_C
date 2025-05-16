/////////////////////////////////////////////////////////////////
//
// Name :          program5.c
// Discription :   Check whether charecter is vowel or not
// Input :         char
// Output :        String
// Author :        Shivam Rajendra Kale
// Date :          13/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept character from User
         Check 
           if 
             Display  It is Vowel
           if 
             Display It is not Vowel
    Stop         
*/

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char cCh)
{
    if((cCh == 'A') || (cCh == 'E') || (cCh == 'I') || (cCh == 'O') || (cCh == 'U')
       || (cCh == 'a') || (cCh == 'e') || (cCh == 'i') || (cCh =='o') || (cCh == 'u'))
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
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character : ");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if (bRet == TRUE)
    {
        printf("It is Vowel");
    } 
    else 
    {
        printf("It is not Vowel");
    }

    return 0;

}