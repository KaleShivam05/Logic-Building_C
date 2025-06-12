///////////////////////////////////////////////////////////////////
//
// Name :          program4.c
// Discription :   Display frequency of 11 from it
// Input :         Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          02/06/2025
//
///////////////////////////////////////////////////////////////////

/*
    Start
        Accept elements from user
            Display frequency of 11 from it
    Stop            
*/

#include<stdio.h>

int Display(int Arr[], int iLength)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
       if(Arr[iCnt] == 11)
       {
            iCount++;
       }
    }

    return iCount;
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

    printf("Result is : %d",iRet);

    free(p);
    
    return 0;
}