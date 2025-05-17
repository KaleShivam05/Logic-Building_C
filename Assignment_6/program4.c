/////////////////////////////////////////////////////////////////
//
// Name :          program4.c
// Discription :   Display table
// Input :         integer
// Output :        integer 
// Author :        Shivam Rajendra Kale
// Date :          14/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept number from user
            Display table of that number
    Stop        
*/

#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    int iTab = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        iTab = iNo * iCnt;
        printf("%d\t",iTab);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number :");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}