////////////////////////////////////////////////////////////////////////
//
// Name :          program1.c
// Discription :   Display Largest number
// Input :         Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          04/06/2025
//
/////////////////////////////////////////////////////////////////////////

/*
   Start
      Accept elements from user 
        Display Largest number
   Stop      
*/

#include<stdio.h>
#include<stdlib.h>

int CheckNumber(int Arr[], int iLength)
{
   int iCnt = 0 , iCount = Arr[0];

   for(iCnt = 0; iCnt < iLength; iCnt++)
   {
      if(Arr[iCnt] > Arr[0])
      {
         iCount = Arr[iCnt];
      } 
   }
   return iCount;
}

int main()
{
   int iSize = 0, iRet = 0, iCnt = 0;
   int *p = NULL;

   printf("Enter numbers of elements\n");
   scanf("%d",&iSize);

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

   iRet = CheckNumber(p,iSize); //function call

   printf("Largest Number is : %d",iRet);

   free(p);

   return 0;
}
