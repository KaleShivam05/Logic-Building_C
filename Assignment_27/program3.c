///////////////////////////////////////////////////////////////////////////
//
// Name :          program3.c
// Discription :   Copy Capital character from string into another string
// Input :         String
// Output :        String
// Author :        Shivam Rajendra Kale
// Date :          10/06/2025
//
////////////////////////////////////////////////////////////////////////////

/*
   Start
      Accept String from user
         Copy Capital characters of that string into another string
    Stop         
*/

#include<stdio.h>

void StrCpyCap(char *str, char *dest)
{
   if(NULL == str)
   {
      return ;
   }

   while(*str != '\0')
   {
      if((*str >= 'A') && (*str <= 'Z'))
      {
         *dest = *str;
         dest++;
      }
      str++;
   }

}
int main()
{
   char arr[30] = {'\0'};
   char brr[30] = {'\0'};

   printf("Enter String :\n");
   scanf("%[^'\n']s",arr);

   StrCpyCap(arr,brr);

   printf("%s",brr);

   return 0;
}