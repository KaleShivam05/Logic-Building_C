/////////////////////////////////////////////////////////////////
//
// Name :          program1.c
// Discription :   Display pattern
// Input :         Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          22/05/2025
//
/////////////////////////////////////////////////////////////////

/*
  Input : Row = 4   col = 4

  Output : 1  2  3  4
           5  6  7  8
           9  1  2  3
           4  5  6  7 
*/

#include<stdio.h>

void pattern(int iROw, int iCol)
{
   int i = 0, j = 0, iCnt = 0;

   for(i = 1, iCnt = 1; i <= iROw; i++)
   {
        for(j = 1; j <= iCol; j++, iCnt++)
        {
            if(iCnt == 10)
            {
               iCnt = 1;
            }
           printf("%d\t",iCnt);
        }
        printf("\n");
   }
}

int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter number of Row :");
    scanf("%d",&iValue1);

    printf("Enter number of Column :");
    scanf("%d",&iValue2);

    pattern(iValue1, iValue2);   //function call

    return 0;
}