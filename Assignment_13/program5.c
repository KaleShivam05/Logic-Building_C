////////////////////////////////////////////////////////////////////
//
// Name :          program5.c
// Discription :   Display Pattern
// Input :         Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          22/05/2025
//
////////////////////////////////////////////////////////////////////

/*
  Input : Row = 3   col = 4
  
  Output : 1  2  3  4
           5  6  7  8
           9  10  11  12
*/
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iCnt = 0;

    for(i = 1, iCnt = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++,iCnt++)
        {
           printf("%d\t",iCnt);
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