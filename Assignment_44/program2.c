//////////////////////////////////////////////////////////////////////////
//
// Name :          program2.c
// Discription :   use to Display frequency of any element
// Input :         Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          10/10/2025
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int FindFrequency(int **Arr, int iValue1, int iValue2, int iNo)
{
    int i = 0, j = 0;
    int iCount = 0;

    for(i = 0; i < iValue1; i++)
    {
        for(j = 0; j < iValue2; j++)
        {
            if(Arr[i][j] == iNo)
            {
                iCount++;
            }    
        }
    }

    return iCount;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int i = 0, j = 0;
    int **Arr = NULL;
    int iRet = 0, iNo = 0;

    printf("Enter number of Row :\n");
    scanf("%d", &iValue1);

    printf("Enter number of Col :\n");
    scanf("%d", &iValue2);

    Arr = (int**)malloc(sizeof(int**) * iValue1);

    for(i = 0; i < iValue1; i++)
    {
        Arr[i] = (int *)malloc(sizeof(int)*iValue2);
    }

    for(i = 0; i < iValue1; i++)
    {
        for(j = 0; j < iValue2; j++)
        {
            scanf("%d",&Arr[i][j]);
        }
    }

    printf("Enter number that you want to find frequency :\n");
    scanf("%d", &iNo);

    iRet = FindFrequency(Arr, iValue1, iValue2, iNo);
    printf("frequency of %d is :%d\n",iNo,iRet);
    
    return 0;
}