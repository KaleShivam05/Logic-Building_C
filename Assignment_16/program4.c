/////////////////////////////////////////////////////////////////
//
// Name :          program4.c
// Discription :   Display Pattern 
// Input :         Integer
// Output :        Charecter
// Author :        Shivam Rajendra Kale
// Date :          22/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Input : row = 6  col = 6
    
    Output : *  *  *  *  *  *
             *  *           *
             *     *        *
             *        *     *
             *           *  *
             *  *  *  *  *  *
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    if(iRow != iCol)
    {
        return;
    }

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if((j == 1)||(j == iCol)||(i == 1)||(i == iRow))
            {
                printf("*\t");
            }  
            else if(i == j)
            {
                printf("*\t");
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