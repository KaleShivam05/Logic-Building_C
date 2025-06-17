///////////////////////////////////////////////////////////////////////
//
// Name :          program5.c
// Discription :   Count white spaces
// Input :         String
// Output :        String 
// Author :        Shivam Rajendra Kale
// Date :          08/06/2025
//
////////////////////////////////////////////////////////////////////////

/*
  Start
    Accept String from user 
      count white spaces from string
  Stop    
*/


#include<stdio.h>

int CountWhite(char *str)
{
   int iCount = 0;

   if(NULL == str)
   {
      return -1;
   }

   while(*str != '\0')
   {
      if(*str == ' ')
      {
         iCount++;   
      }
      str++;
   }

   return iCount;

}

int main()
{
   char Arr[20] = {'\0'};
   int iRet = 0;

   printf("Enter string :\n");
   scanf("%[^'\n']s",Arr);

   iRet = CountWhite(Arr); 

   printf("%d",iRet);

   return 0;

}