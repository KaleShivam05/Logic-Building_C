/////////////////////////////////////////////////////////////////////////
//
// Name :          program2.c
// Discription :   Display Diff between Frequency of even & odd numbers
// Input :         Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          02/06/2025
//
//////////////////////////////////////////////////////////////////////////

/*
    Start
        Accept elements from user
         Check numbers are even or odd then
           Count frequency and
           Display Difference of even frequency and odd frequency
    Stop             
*/

#include<stdio.h>
#include<stdlib.h>

int Display(int Arr[], int iLength)
{
    int iCnt = 0, iCountEven = 0, iCountOdd = 0, iDiff = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)  // logic
        {
            iCountEven++;
        }
        else 
        {
            iCountOdd++;
        }

        iDiff = iCountOdd - iCountEven;

        return iDiff;
    }
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;;
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
