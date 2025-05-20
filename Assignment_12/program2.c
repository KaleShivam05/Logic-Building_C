/////////////////////////////////////////////////////////////////
//
// Name :          program2.c
// Discription :   Display pattern
// Input :         Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          21/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Input : row = 4   col = 3

    Output : 1  2  3
             1  2  3
             1  2  3
             1  2  3
*/

#include<stdio.h>

void Pattern(int iRow , int iCol)
{
   int i = 0, j = 0;

   for(i = 1; i <= iRow; i++)
   {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t",j);
        }
        printf("\n");
   }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of Rows :");
    scanf("%d",&iValue1);

    printf("Enter number of Column :");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);   //function call

    return 0;
}