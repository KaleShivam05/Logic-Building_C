/////////////////////////////////////////////////////////////////////////
//
// Name :          program3.c
// Discription :   Check whether String contains vowels or not
// Input :         String
// Output :        string
// Author :        Shivam Rajendra Kale
// Date :          07/06/2025
//
//////////////////////////////////////////////////////////////////////////

/*
   Start
      Accept String from user 
         Check whether String contains vowels or not
          if vowels is present in String than
           Display Contains Vowel
          if vowel is not present in String than
           Display there is no Vowel 
    Stop         
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVOwel(char *str)
{
   BOOL bFlag = FALSE;

   if(NULL == str)
   {
      return -1;
   }

   while(*str != '\0')
   {
      if(('a' == *str) || ('e' == *str) || ('i' == *str) || ('o' == *str) || ('u' == *str) ||
        ('A' == *str) || ('E' == *str) || ('I' == *str) || ('O' == *str) || ('U' == *str))
      {
         bFlag = TRUE;
      }
      str++;
   }

  return bFlag;

}

int main()
{
   char Arr[20];
   BOOL bRet = 0;

   printf("Enter string :\n");
   scanf("%[^'\n']s",Arr);

   bRet = ChkVOwel(Arr);

   if(TRUE == bRet)
   {
      printf("Contains Vowel");
   }
   else
   {
      printf("There is no Vowel");
   }

   return 0;

}