/////////////////////////////////////////////////////////////////////////
//
// Name :          program3.c
// Discription :   Display occurrence character in stirng   
// Input :         String
// Output :        String
// Author :        Shivam Rajendra Kale
// Date :          09/06/2025
//
//////////////////////////////////////////////////////////////////////////

/*
   Start
      Accept string & character from user 
           Display first occurrence character in stirng   
    Stop         
*/

#include<stdio.h>

int CharFirstIndex(char *str, char ch)
{
   int iCnt = 0, iIndex = 0;

   if(NULL == str)
   {
      return -1;
   }

   for(iCnt = 0; str[iCnt] != '\0'; iCnt++)
   {
      if(str[iCnt] == ch)
      {
         iIndex = iCnt;
         break;
      }
   }

   return iIndex;

}

int main()
{
   char Arr[20] = {'\0'};
   char cValue = '\0';
   int iRet = 0;

   printf("Enter string :\n");
   scanf("%[^'\n']s",Arr);

   printf("Enter string :\n");
   scanf(" %c",&cValue);

   iRet = CharFirstIndex(Arr,cValue);

   printf("Character location is :%d",iRet);

   return 0;

}