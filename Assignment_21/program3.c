/////////////////////////////////////////////////////////////////////////
//
// Name :          program3.c
// Discription :   Display Defference Between largest & smallest number 
// Input :         Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          04/06/2025
//
//////////////////////////////////////////////////////////////////////////

/*
   Start
        Accept elements from user
         Check largest number & smallest number than
          Display Defference Between largest & smallest number  
    Stop         
*/

#include<stdio.h>

int CheckNumber(int Arr[], int iLength)
{
   int iCnt = 0 , iLarg = Arr[0], iSmall = Arr[0], iDiff = 0;

   for(iCnt = 0; iCnt < iLength; iCnt++)
   {
      if(Arr[iCnt] >= Arr[0])
      {
         iLarg = Arr[iCnt];
      }
      else if(Arr[0] >= Arr[iCnt])
      {
         iSmall = Arr[iCnt];
      }
   }

   iDiff = iLarg - iSmall;

   return iDiff;
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

   printf("Difference is : %d",iRet);

   free(p);

   return 0;
}

