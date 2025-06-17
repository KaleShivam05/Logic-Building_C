/////////////////////////////////////////////////////////////////////////
//
// Name :          program2.c
// Discription :   Check frequency of charecter in String 
// Input :         String
// Output :        String
// Author :        Shivam Rajendra Kale
// Date :          09/06/2025
//
//////////////////////////////////////////////////////////////////////////

/*
    Start
      Accept String & character from user  
        Check frequency of charecter in String
    Stop             
*/

#include<stdio.h>

int CountChar(char *str, char ch)
{
   int iCount = 0;

   if(NULL == str)
   {
      return -1;
   }

   while(*str != '\0')
   {
      if(*str == ch)
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
   char cValue = '\0';
   int iRet = 0; 

   printf("Enter string :\n");
   scanf("%[^'\n']s",Arr);

   printf("Enter Character :\n");
   scanf(" %c",&cValue);

   iRet = CountChar(Arr,cValue);
   
   printf("Character frequency is: %d",iRet);

   return 0;

}