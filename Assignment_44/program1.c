//////////////////////////////////////////////////////////////////////////
//
// Name :          program1.c
// Discription :   use to Display addition of diagonal elements
// Input :         Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          10/10/2025
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int AddDiagonal(int **Arr, int iValue1, int iValue2)
{
    int i = 0, j = 0;
    int iSum = 0;

    for(i = 0; i < iValue1; i++)
    {
        for(j = 0; j < iValue2; j++)
        {
            if(i == j)
            {
                iSum = iSum + Arr[i][j];
            }    
        }
    }

    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int i = 0, j = 0;
    int **Arr = NULL;
    int iRet = 0;

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

    iRet = AddDiagonal(Arr, iValue1, iValue2);
    printf("Addition of diagonal elements are :%d\n",iRet);

    
    return 0;
}