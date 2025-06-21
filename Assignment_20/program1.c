////////////////////////////////////////////////////////////////////////
//
// Name :          program1.c
// Discription :   Check whether number is present or not
// Input :         Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          03/06/2025
//
/////////////////////////////////////////////////////////////////////////

/*
   Start
      Accept elements & one number from user 
         Check whether number is present in elements 
          if number is present than
           Display True
          if number is not present than
           Display False 
   Stop      
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckNumber(int Arr[], int iLength, int iNO)
{
   int iCnt = 0;
   BOOL bFlag = FALSE;

   for(iCnt = 0; iCnt < iLength; iCnt++)
   {
      if(Arr[iCnt] == iNO)  //logic
      {
         bFlag = TRUE;
         break;
      }
   }

   return bFlag;
}

int main()
{
   int iSize = 0, iValue = 0, iCnt = 0;
   int *p = NULL;
   BOOL bRet = FALSE;

   printf("Enter numbers of elements\n");
   scanf("%d",&iSize);

   printf("Enter numbers that you want to find :\n");
   scanf("%d",&iValue);

   p = (int*)malloc(iSize * sizeof(int));  //Dynamic memory allocation

   if(NULL == p)       //filter
   {
      printf("Unable to allocate memory");
      return -1;
   }

   printf("Enter %d elements :\n",iSize);

   for(iCnt = 0; iCnt < iSize; iCnt++)    //Input
   {
      printf("Enter number %d:",iCnt+1); 
      scanf("%d",&p[iCnt]);           
   }

   bRet = CheckNumber(p,iSize,iValue); //function call

   if(bRet == TRUE)  
   {
      printf("TRUE");
   }
   else 
   {
      printf("FALSE");
   }

   free(p);

   return 0;
}
