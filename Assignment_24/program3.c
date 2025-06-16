/////////////////////////////////////////////////////////////////////////
//
// Name :          program3.c
// Discription :   Didplay character   
// Input :         String
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          07/06/2025
//
//////////////////////////////////////////////////////////////////////////

/*
   Start
      Accept input from user 
            if the input is Capital character than
               Display all Character till Z
            if the input is small character than
               Display all Character in reverse order till a
    Stop         
*/

#include<stdio.h>

int CountCapital(char *str)
{
  int iCnt = 0, iCountCap = 0, iCountSmall = 0, iDiff = 0;

  if(NULL == str)
  {
     return -1;
  }

  while(*str != '\0')
  {
     if((*str >= 'a') && (*str <= 'z'))
     {
        iCountSmall++;
     }
     else if((*str >= 'A') && (*str <= 'Z'))
     {
        iCountCap++;
     }
     str++;
  }

  iDiff = iCountSmall - iCountCap;

  return iDiff;

}

int main()
{
   char Arr[20];
   int iRet = 0;

   printf("Enter string :\n");
   scanf("%[^'\n']s",Arr);

   iRet = CountCapital(Arr);

   printf("%d",iRet);

   return 0;

}