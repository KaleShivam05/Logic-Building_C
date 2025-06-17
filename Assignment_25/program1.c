////////////////////////////////////////////////////////////////////
//
// Name :          program1.c
// Discription :   String Convert into lower case
// Input :         String
// Output :        String
// Author :        Shivam Rajendra Kale
// Date :          08/06/2025
//
////////////////////////////////////////////////////////////////////

/*
  Start
    Accept String from user 
      String Convert into lower case
  Stop    
*/

#include<stdio.h>

void strlwrx(char *str)
{

   if(NULL == str)
   {
      return ;
   }

   while(*str != '\0')
   {
      if((*str >= 'A') && (*str <= 'Z'))
      {
         *str = *str +32;   
      }
      printf("%c",*str);
      str++;
   }

}

int main()
{
   char Arr[20] = {'\0'};

   printf("Enter string :\n");
   scanf("%[^'\n']s",Arr);

   strlwrx(Arr); 

   return 0;

}