/////////////////////////////////////////////////////////////////
//
// Name :          program1.c
// Discription :   Display pattern
// Input :         Integer
// Output :        Chrecter
// Author :        Shivam Rajendra Kale
// Date :          22/05/2025
//
/////////////////////////////////////////////////////////////////

/*
  Input : Row = 4   col = 4

  Output : *  #  #  #
           *  *  #  #
           *  *  *  #
           *  *  *  *
*/

#include<stdio.h>

void pattern(int iROw, int iCol)
{
   int i = 0, j = 0;

   for(i = 1; i <= iROw; i++)
   {
        for(j = 1; j <= iCol; j++)
        {
            if(i >= j)
            {
               printf("*\t");
            }  
            else
            {
               printf("#\t");
            }
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