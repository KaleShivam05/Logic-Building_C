////////////////////////////////////////////////////////////////////
//
// Name :          program5.c
// Discription :   Display summation of digis of each number 
// Input :         Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          04/06/2025
//
////////////////////////////////////////////////////////////////////

/*
  Start
    Accept elements from user 
      Display summation of digis of each number
  Stop    
*/

#include<stdio.h>

void CheckNumber(int Arr[], int iLength)
{
    int iCnt = 0, iDigit = 0, iAdd = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        while(Arr[iCnt] != 0)
        {    
            iDigit = Arr[iCnt] % 10;
            iAdd = iAdd + iDigit;
            Arr[iCnt] = Arr[iCnt] / 10;
        }    
        printf("%d\t",iAdd);
        iAdd = 0;
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
