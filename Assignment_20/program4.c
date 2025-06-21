///////////////////////////////////////////////////////////////////
//
// Name :          program4.c
// Discription :   Display All elements from range
// Input :         Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          03/06/2025
//
///////////////////////////////////////////////////////////////////

/*
    Start
        Accept elements & range from user
         Display numbers are present in that range
    Stop            
*/

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength, int Start, int End)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
       if((Arr[iCnt] >= Start) && (Arr[iCnt] <= End))
       {
            printf("%d\t",Arr[iCnt]);
       }
    }

}

int main()
{
    int iSize = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;
    int *p = NULL;

    printf("Enter number of elements :\n");
    scanf("%d",&iSize);

    printf("Enter Start point :\n");
    scanf("%d",&iValue1);

    printf("Enter End point :\n");
    scanf("%d",&iValue2);

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

    Display(p, iSize, iValue1, iValue2); //function call

    free(p);
    
    return 0;
}
