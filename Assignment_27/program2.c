/////////////////////////////////////////////////////////////////////////
//
// Name :          program2.c
// Discription :   copy String 
// Input :         None
// Output :        String
// Author :        Shivam Rajendra Kale
// Date :          10/06/2025
//
//////////////////////////////////////////////////////////////////////////

/*
    Start
      copy stirng 
    Stop             
*/

#include<stdio.h>

void StrNCpyX(char *str, char *dest, int iCnt)
{
   if(NULL == str)
   {
      return ;
   }

   while((*str != '\0') && (iCnt != 0))
   {
      *dest = *str;
      str++;
      dest++;
      iCnt--;
   }

}
int main()
{
   char arr[30] = "Marvellous Multi OS";
   char brr[30] = {'\0'};

   StrNCpyX(arr,brr,10);

   printf("%s",brr);

   return 0;
}