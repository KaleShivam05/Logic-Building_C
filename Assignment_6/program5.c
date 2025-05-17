/////////////////////////////////////////////////////////////////
//
// Name :          program5.c
// Discription :   Display table in reverse order
// Input :         integer
// Output :        integer 
// Author :        Shivam Rajendra Kale
// Date :          14/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept input from user
            Display table in reverse order
    Stop
*/

#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0, iRev = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        iRev = iNo * iCnt;
        printf("%d\t",iRev);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}