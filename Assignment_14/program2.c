/////////////////////////////////////////////////////////////////
//
// Name :          program2.c
// Discription :   Display pattern
// Input :         Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          22/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Input : row = 4   col = 5

    Output : 2  4  6  8  10
             1  3  5  7  9
             2  4  6  8  10
             1  3  5  7  9
*/

#include<stdio.h>

void Pattern(int iRow , int iCol)
{
   int i = 0, j = 0, iCnt = 0;

   for(i = 1; i <= iRow; i++)
   {
        if((i % 2) != 0)
        {
            for(j = 1; j <= iCol; j++)
            {
               iCnt = (j * 2);
               printf("%d\t",iCnt);
            }   
        }
        else
        {
            for(j = 1, iCnt = 0; j <= iCol; j++)
            {
                iCnt = (j * 2) - 1;
                printf("%d\t",iCnt);
            }   
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