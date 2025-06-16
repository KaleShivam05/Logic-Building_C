///////////////////////////////////////////////////////////////////////
//
// Name :          program5.c
// Discription :   Display String reverse order
// Input :         String
// Output :        String 
// Author :        Shivam Rajendra Kale
// Date :          07/06/2025
//
////////////////////////////////////////////////////////////////////////

/*
  Start
    Accept String from user 
      Display String in reverse order
  Stop    
*/


#include<stdio.h>

void Reverse(char *str)
{
  int iCount = 0,iCnt = 0;

    while(*str != '\0')
    {
        iCount++;
        str++;
    }

    str--;

    for(iCnt = iCount; iCnt > 0; iCnt--,str--)
    {
        printf("%c",*str);
    }

}

int main()
{
   char Arr[20];

   printf("Enter string :\n");
   scanf("%[^'\n']s",Arr);

   Reverse(Arr);

   return 0;

}