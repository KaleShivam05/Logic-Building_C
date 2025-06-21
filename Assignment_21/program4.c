///////////////////////////////////////////////////////////////////
//
// Name :          program4.c
// Discription :   Display elements which contain 3 digits
// Input :         Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          04/06/2025
//
///////////////////////////////////////////////////////////////////

/*
    Start
        Accept elements from user
         Display elements which contain 3 digits
    Stop            
*/

#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int Arr[], int iLength)
{
   int iCnt = 0;

   for(iCnt = 0; iCnt < iLength; iCnt++)
   {
      if((Arr[iCnt] >= 100) && (Arr[iCnt] <= 999))
      {
            printf("%d\t",Arr[iCnt]);
      }
   }

}

int main()
{
   int iSize = 0, iCnt = 0;
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

   CheckNumber(p,iSize); //function call

   free(p);

   return 0;
}
