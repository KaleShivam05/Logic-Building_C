/////////////////////////////////////////////////////////////////////////////
//
// Name :          program4.c
// Discription :   use to check whether the matrix is identity matrix or not
// Input :         Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          11/10/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool ChkIdentity(int **Arr, int iValue1, int iValue2)
{
    int i = 0, j = 0;
    bool bFalg = true;

    for(i = 0; i < iValue1; i++)
    {
        for(j = 0; j < iValue2; j++)
        {
            if(i == j)
            {
                if(Arr[i][j] != 1)
                {
                    bFalg = false;
                }
            }
            else 
            {
                if(Arr[i][j] != 0)
                {
                    bFalg = false;
                }
            }
        }
    }

    return bFalg;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int i = 0, j = 0;
    int **Arr = NULL;
    bool bRet = false;

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

    for(i = 0; i < iValue1; i++)
    {
        for(j = 0; j < iValue2; j++)
        {
            printf("%d\t", Arr[i][j]);
        }
        printf("\n");
    }

    bRet = ChkIdentity(Arr, iValue1, iValue2);
    if(bRet == true)
    {
        printf("it is a identity matrix\n");
    }
    else 
    {
        printf("it is not a identity matrix\n");
    }

    return 0;
}