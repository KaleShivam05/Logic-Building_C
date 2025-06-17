/////////////////////////////////////////////////////////////////////////
//
// Name :          program2.c
// Discription :   String Convert into upper case 
// Input :         String
// Output :        String
// Author :        Shivam Rajendra Kale
// Date :          08/06/2025
//
//////////////////////////////////////////////////////////////////////////

/*
    Start
      Accept String from user  
        String Convert into upper case
    Stop             
*/

#include<stdio.h>

void struprx(char *str)
{

   if(NULL == str)
   {
      return ;
   }

   while(*str != '\0')
   {
      if((*str >= 'a') && (*str <= 'z'))
      {
         *str = *str - 32;   
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

   struprx(Arr); 

   return 0;

}