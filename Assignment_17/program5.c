////////////////////////////////////////////////////////////////////
//
// Name :          program5.c
// Discription :   Display Pattern
// Input :         Integer
// Output :        Charecter
// Author :        Shivam Rajendra Kale
// Date :          23/05/2025
//
////////////////////////////////////////////////////////////////////

/*
  Input : Row = 4   col = 4
  
  Output : 1  2  3  4  5
           1  2        5
           1     3     5
           1        4  5
           1  2  3  4  5
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= (iRow + 1); i++)
    {
        for(j = 1; j <= (iCol + 1); j++)
        {
          
            if((i == 1)||(i == (iRow + 1))||(j == 1)||(j == (iCol +1)))
            {
                printf("%d\t",j);
            }
            else if(i == j)
            {
                printf("%d\t",j);
            }
            else
            {
                printf("\t");
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