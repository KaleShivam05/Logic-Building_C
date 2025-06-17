/////////////////////////////////////////////////////////////////////////
//
// Name :          program3.c
// Discription :   Display digits from string
// Input :         String
// Output :        string
// Author :        Shivam Rajendra Kale
// Date :          08/06/2025
//
//////////////////////////////////////////////////////////////////////////

/*
   Start
      Accept String from user 
         Display digits from string
    Stop         
*/

#include<stdio.h>

void DisplayDigit(char *str)
{
   int iDisplacement = 0;

   if(NULL == str)
   {
      return ;
   }

   while(*str != '\0')
   {
      if((*str >= '1') && (*str <= '9'))
      {
         printf("%c",*str);   
      }
      str++;
   }

}

int main()
{
   char Arr[20] = {'\0'};

   printf("Enter string :\n");
   scanf("%[^'\n']s",Arr);

   DisplayDigit(Arr); 

   return 0;

}