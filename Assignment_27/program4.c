//////////////////////////////////////////////////////////////////////////////
//
// Name :          program4.c
// Discription :   Copy small characters of that string into another string
// Input :         String
// Output :        String
// Author :        Shivam Rajendra Kale
// Date :          10/06/2025
//
//////////////////////////////////////////////////////////////////////////////

/*
   Start
      Accept string from user 
           Copy small characters of that string into another string   
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
      if((*str >= 'a') && (*str <= 'z') || (*str == ' '))
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