//////////////////////////////////////////////////////////////////////////
//
// Name :          program2.c
// Discription :   use to reverse the contents of each row
// Input :         Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          11/10/2025
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void ReverseRow(int **Arr, int iValue1, int iValue2)
{
    int i = 0, j = 0, k = iValue2 - 1;
    int temp = 0;

    for(i = 0; i < iValue1; i++)
    {
        for(j = 0; j < (iValue2/2); j++)
        {
            temp = Arr[i][j];
            Arr[i][j] = Arr[i][k-j];
            Arr[i][k-j] = temp;
        }
    }

    printf("Updated matrixs is : \n");

    for(i = 0; i < iValue1; i++)
    {
        for(j = 0; j < iValue2; j++)
        {
            printf("%d\t", Arr[i][j]);
        }
        printf("\n");
    }

}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int i = 0, j = 0;
    int **Arr = NULL;

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

    ReverseRow(Arr, iValue1, iValue2);

    return 0;
}