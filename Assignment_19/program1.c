////////////////////////////////////////////////////////////////////////
//
// Name :          program1.c
// Discription :   Display frequency of even numbers
// Input :         Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          02/06/2025
//
/////////////////////////////////////////////////////////////////////////

/*
   Start
      Accept elements from user
         Display frequency of even numbers
   Stop      
*/

#include<stdio.h>

int Difference(int Arr[],int iNo)
{
   int iCnt = 0, iCount = 0;

   for(iCnt = 0; iCnt < iNo; iCnt++)
   {
      if((Arr[iCnt] % 2) == 0)       
      {
         iCount++;
      }
   }

   return iCount;

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