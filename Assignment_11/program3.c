/////////////////////////////////////////////////////////////////
//
// Name :          program3.c
// Discription :   Display Pattern
// Input :         Integer
// Output :        Integer, Charecter
// Author :        Shivam Rajendra Kale
// Date :          20/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept input from user
            Display 1  *  2  *  3  *  4  *  5  *
    Stop                  
*/

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t*\t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    Pattern(iValue);   //function call

    return 0;
}