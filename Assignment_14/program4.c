/////////////////////////////////////////////////////////////////
//
// Name :          program4.c
// Discription :   Display Pattern 
// Input :         Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          22/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Input : row = 5  col = 5
    
    Output : 1   2   3   4   5
            -1  -2  -3  -4  -5
             1   2   3   4   5
            -1  -2  -3  -4  -5
             1   2   3   4   5
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iCnt = 0;

    for(i = iRow; i >= 1; i--)
    {
        for(j = 1, iCnt = -1; j <= iCol,iCnt >= -iCol; j++, iCnt--)
        {
            if((i % 2) != 0)
            {
                printf("%d\t",j);
            }  
            else
            {
                printf("%d\t",iCnt);
            }  
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows :");
    scanf("%d",&iValue1);

     printf("Enter number of column :");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);   //function call

    return 0;
}