/////////////////////////////////////////////////////////////////
//
// Name :          program3.c
// Discription :   Display Pattern
// Input :         Integer
// Output :        Charecter
// Author :        Shivam Rajendra Kale
// Date :          22/05/2025
//
/////////////////////////////////////////////////////////////////

/*
   Input : Row = 3   col = 5
   
   Output : A  A  A  A  A
            B  B  B  B  B
            C  C  C  C  C
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';

    for(i = 1,ch = 'A'; i <= iRow; i++,ch++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%c\t",ch);
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