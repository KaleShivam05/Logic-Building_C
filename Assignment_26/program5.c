///////////////////////////////////////////////////////////////////////
//
// Name :          program5.c
// Discription :   Reverse the String
// Input :         String
// Output :        String 
// Author :        Shivam Rajendra Kale
// Date :          09/06/2025
//
////////////////////////////////////////////////////////////////////////

/*
  Start
    Accept String from user 
      reverse the string
  Stop    
*/


#include<stdio.h>

void strReverse(char *str)
{
   int iCnt = 0;
   char *start = NULL;
   char *end = NULL;
   char temp = '\0';

   if(NULL == str)
   {
      return ;
   }

   start = str;
   end = str;

   while(*end != '\0')
   {
      end++;
   }
   end--;

   while(start < end)
   {
      temp = *start;
      *start = *end;
      *end = temp;

      start++;
      end--;
   }
  
}

int main()
{
   char Arr[20] = {'\0'};

   printf("Enter string :\n");
   scanf("%[^'\n']s",Arr);

   strReverse(Arr); 

   printf("Updated String is :%s",Arr);

   return 0;

}