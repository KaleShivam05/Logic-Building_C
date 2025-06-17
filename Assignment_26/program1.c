////////////////////////////////////////////////////////////////////////
//
// Name :          program1.c
// Discription :   Check whether character is present in string or not
// Input :         String
// Output :        String
// Author :        Shivam Rajendra Kale
// Date :          09/06/2025
//
///////////////////////////////////////////////////////////////////////

/*
  Start
    Accept String from user 
      Check whether character is present in string or not
  Stop    
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str,char ch)
{
   BOOL bFlag = FALSE;

   if(NULL == str)
   {
      return -1;
   }

   while(*str != '\0')
   {
      if(*str == ch)
      {
          bFlag = TRUE;
          break;
      }
      str++;
   }

   return bFlag;
}

int main()
{
   char Arr[20] = {'\0'};
   char cValue = '\0';
   BOOL bRet = FALSE;

   printf("Enter string :\n");
   scanf("%[^'\n']s",Arr);

   printf("Enter Character :\n");
   scanf(" %c",&cValue);

   bRet = ChkChar(Arr,cValue); 

   if(TRUE == bRet)
   {
      printf("Character found");
   }
   else
   {
      printf("Character not found");
   }

   return 0;

}