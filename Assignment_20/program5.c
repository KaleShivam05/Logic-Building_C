////////////////////////////////////////////////////////////////////
//
// Name :          program5.c
// Discription :   Display product of all odd elements 
// Input :         Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          03/06/2025
//
////////////////////////////////////////////////////////////////////

/*
  Start
    Accept elements from user 
      Display product of all odd elements
  Stop    
*/

#include<stdio.h>

int Display(int Arr[], int iLength)
{
    int iCnt = 0, iMulti = 1;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)  //logic
        {
           iMulti = iMulti * Arr[iCnt];
        }
    }

    if(iMulti == 1)
    {
        iMulti = 0;
    }
    
    return iMulti;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
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

    iRet = Display(p,iSize); //function call

    printf("Product is : %d",iRet);

    free(p);

    return 0;
}