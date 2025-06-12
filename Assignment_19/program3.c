/////////////////////////////////////////////////////////////////////
//
// Name :          program3.c
// Discription :   Check whether numbers contains 11 or not 
// Input :         Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          02/06/2025
//
//////////////////////////////////////////////////////////////////////

/*
   Start
        Accept elments from usre
         Check elements contains 11 or not 
            if 11 is cotains than
              Display 11 is present
            if 11 is not Cotains than 
              Display 11 is absent 
    Stop         
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Display(int Arr[], int iLength)
{
    int iCnt = 0;
    BOOL bFlag = FALSE;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
           bFlag = TRUE;
        }    
    }

    return bFlag;
}

int main()
{
    int iSize = 0, iCnt = 0;
    BOOL bRet = FALSE;
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

    bRet = Display(p,iSize); //function call

    if(bRet == TRUE)
    {
        printf("11 is Present");   
    }
    else 
    {
        printf("11 is absent");
    }

    free(p);

    return 0;
}