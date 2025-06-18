////////////////////////////////////////////////////////////////////////
//
// Name :          program1.c
// Discription :   Copy string
// Input :         None
// Output :        String
// Author :        Shivam Rajendra Kale
// Date :          10/06/2025
//
///////////////////////////////////////////////////////////////////////

/*
  Start
    Cpoy string
  Stop    
*/

#include<stdio.h>

void StrCpyX(char *str, char *dest)
{
   if(NULL == str)
   {
      return ;
   }

   while(*str != '\0')
   {
      *dest = *str;
      str++;
      dest++;
   }

}
int main()
{
   char arr[30] = "Marvellous Multi OS";
   char brr[30] = {'\0'};

   StrCpyX(arr,brr);

   printf("%s",brr);

   return 0;
}