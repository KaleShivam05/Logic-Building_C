/////////////////////////////////////////////////////////////////////////
//
// Name :          program3.c
// Discription :   toggle the case  
// Input :         String
// Output :        String
// Author :        Shivam Rajendra Kale
// Date :          08/06/2025
//
//////////////////////////////////////////////////////////////////////////

/*
   Start
      Accept string from user 
           toggle the case
    Stop         
*/

#include<stdio.h>

void strtogglex(char *str)
{
   int iDisplacement = 0;

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
      else if((*str >= 'A') && (*str <= 'Z'))
      {
         *str = *str + 32; 
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

   strtogglex(Arr); 

   return 0;

}