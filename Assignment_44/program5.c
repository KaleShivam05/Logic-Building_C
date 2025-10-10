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
    int temp = 0;

    if((iRow % 2 ) != 0)
    {
        printf("Unable to swap rows\n");
        return;
    }

    for(i = 0; i < (iRow-1); i++)
    {
        for(j = 0; j < iCol; j++)
        {
            temp = Arr[i][j];
            Arr[i][j] = Arr[i + 1][j];
            Arr[i + 1][j] = temp; 
        }
    }

    printf("Updated matrix is :\n");

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            printf("%d\t", Arr[i][j]);
        }
        printf("\n");
    }

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

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            printf("%d\t",Arr[i][j]);
        }
        printf("\n");
    }
    
    SwapRows(Arr, iRow, iCol);
    
    return 0;
}
