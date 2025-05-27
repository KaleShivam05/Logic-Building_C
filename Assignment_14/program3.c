/////////////////////////////////////////////////////////////////
//
// Name :          program3.c
// Discription :   Display Pattern
// Input :         Integer
// Output :        Integer, Charecter
// Author :        Shivam Rajendra Kale
// Date :          22/05/2025
//
/////////////////////////////////////////////////////////////////

/*
   Input : Row = 5   col = 5
   
   Output : a  b  c  d  e
            1  2  3  4  5
            a  b  c  d  e
            1  2  3  4  5
            a  b  c  d  e
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, ch = 'a'; j <= iCol; j++,ch++)
        {
            if((i % 2) != 0)
            {
                printf("%c\t",ch);
            }
            else
            {
                printf("%d\t",j);
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