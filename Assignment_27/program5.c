//////////////////////////////////////////////////////////////////////////////
//
// Name :          program5.c
// Discription :   Concat two strings
// Input :         String
// Output :        String
// Author :        Shivam Rajendra Kale
// Date :          10/06/2025
//
//////////////////////////////////////////////////////////////////////////////

/*
   Start
      Accept two string from user 
         Concat strings
    Stop         
*/

#include<stdio.h>

void StrCatX(char *str, char *dest)
{
   if((NULL == str) || (NULL == dest))
   {
      return ;
   }

   while(*str != '\0')
   {
     str++;
   }

   while(*dest != '\0')
   {
      *str = *dest;
      str++;
      dest++;
   }

   *dest = '\0';

}
int main()
{
   char arr[30] = {'\0'};
   char brr[30] = {'\0'};

   printf("Enter first String :\n");
   scanf("%[^\n]s",arr);

   printf("Enter second String :\n");
   scanf(" %[^\n]s",brr);

   StrCatX(arr,brr);

   printf("%s",arr);

   return 0;
}