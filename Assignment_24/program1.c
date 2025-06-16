////////////////////////////////////////////////////////////////////
//
// Name :          program1.c
// Discription :   Check Capital Character 
// Input :         String
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          07/06/2025
//
////////////////////////////////////////////////////////////////////

/*
  Start
    Accept String from user 
      Check capital character form String
  Stop    
*/

#include<stdio.h>

int CountCapital(char *str)
{
  int iCnt = 0, iCount = 0;

  if(NULL == str)
  {
     return -1;
  }

  while(*str != '\0')
  {
     if((*str >= 'A') && (*str <= 'Z'))
     {
        iCount++;
     }
     str++;
  }

  return iCount;
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