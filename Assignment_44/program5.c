//////////////////////////////////////////////////////////////////////////
//
// Name :          program5.c
// Discription :   use to swap the contents of consecutive rows.
// Input :         Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          10/10/2025
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void SwapRows(int **Arr, int iRow, int iCol)
{
    int i = 0, j = 0;
    static int k = 0;
    int iMax = Arr[0][0];
    int iSum1 = 0;

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(j == k)
            {
                iSum1 = iSum1 + Arr[i][j];
            }
        }
    }

    k++;

    if(k > iRow)
    {
        return;
    }

    printf("Addition is : %d\n", iSum1);

    AddColumn(Arr, iRow, iCol);
  
}

int main()
{
    int iRow = 0, iCol = 0;
    int i = 0, j = 0;
    int **Arr = NULL;
    int iRet = 0;

    printf("Enter number of Row :\n");
    scanf("%d", &iRow);

    printf("Enter number of Col :\n");
    scanf("%d", &iCol);

    Arr = (int**)malloc(sizeof(int**) * iRow);

    for(i = 0; i < iRow; i++)
    {
        Arr[i] = (int *)malloc(sizeof(int)*iCol);
    }

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            scanf("%d",&Arr[i][j]);
        }
    }

    SwapRows(Arr, iRow, iCol);

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            printf("%d\t",Arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}