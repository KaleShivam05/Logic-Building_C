///////////////////////////////////////////////////////////////////
//
// Name :          program4.c
// Discription :   Display numbers which are divisible by 3 & 5
// Input :         Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          01/06/2025
//
///////////////////////////////////////////////////////////////////

/*
    Start
        Accept elements from user
            Check elements are Divisible 3 & 5
            Display that elements
    Stop            
*/

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(((Arr[iCnt] % 3) == 0 )&&((Arr[iCnt] % 5) == 0))
        {
            printf("%d\t",Arr[iCnt]);
        }    
    }
}

int main()
{
   int iSize = 0, iCnt = 0;
   int *p = NULL;

   printf("Emter number of elements: ");
   scanf("%d",&iSize);

   p = (int*)malloc(iSize * sizeof(int)); //Dynamic memory allocation

   if(NULL == p)  //filter
   {
        printf("Unable to allocate memory ");
        return -1;
   }

   printf("Enter %d elements :\n",iSize);

   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
        printf("Enter element %d :",iCnt +1);
        scanf("%d",&p[iCnt]);
   }

   Display(p,iSize); //function call

    return 0;
}
