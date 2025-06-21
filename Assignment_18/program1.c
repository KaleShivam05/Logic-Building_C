////////////////////////////////////////////////////////////////////////
//
// Name :          program1.c
// Discription :   Difference between Summation of even & odd numbers
// Input :         Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          01/06/2025
//
/////////////////////////////////////////////////////////////////////////

/*
   Start
      Accept elements from user
        do summation of even or odd numbers
         Display difference between Summation of even & odd numbers
   Stop      
*/

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iNo)
{
   int iCnt = 0, iSumEven = 0, iSumOdd = 0, iDiff = 0;

   for(iCnt = 0; iCnt < iNo; iCnt++)
   {
      if((Arr[iCnt] % 2) == 0)       
      {
         iSumEven = iSumEven + Arr[iCnt];
      }
      else 
      {
         iSumOdd = iSumOdd + Arr[iCnt];
      }
   }

   iDiff = iSumEven - iSumOdd;

   return iDiff;
}

int main()
{
   int iSize = 0, iRet = 0, iCnt = 0;
   int *p = NULL;
   
   printf("Enter number of elements :");
   scanf("%d",&iSize);

   p = (int*)malloc(iSize * sizeof(int));  //Dynamic memory allocation

   if(NULL == p)    //filter
   {
      printf("Unable to allocate memory");
      return -1;
   }

   printf("Enter %d elements : \n",iSize);

   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
      printf("Enter element %d :",iCnt+1);   
      scanf("%d",&p[iCnt]);
   }

   iRet = Difference(p,iSize); //function call

   printf("Result is :%d",iRet);

   free(p);
   
   return 0;
}
