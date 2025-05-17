/////////////////////////////////////////////////////////////////
//
// Name :          program5.c
// Discription :   Display frist 5 multiple of N
// Input :         integer
// Output :        integer
// Author :        Shivam Rajendra Kale
// Date :          14/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept Number from User
            Display frist 5 multiple of number
        
    Stop         
*/

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt <= (iNo * 5); iCnt += iNo)
    {
        printf("%d\t",iCnt);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}