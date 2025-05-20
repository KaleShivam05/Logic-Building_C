////////////////////////////////////////////////////////////////////
//
// Name :          program5.c
// Discription :   Display Pattern
// Input :         Integer
// Output :        Integer, Charecter
// Author :        Shivam Rajendra Kale
// Date :          20/05/2025
//
////////////////////////////////////////////////////////////////////

/*
    Start
        Accept input from user
         intput : 8
             Display  2  4  6  8  10  12  14  16
    Stop                  
*/

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 2; iCnt <= (iNo * 2); iCnt += 2)
    {
        printf("%d\t",iCnt);
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