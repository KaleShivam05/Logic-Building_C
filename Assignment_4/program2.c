/////////////////////////////////////////////////////////////////////
//
// Name :          problem2.c
// Discription :   Display factors in Decreasing order
// Input :         integer
// Output :        integer , String
// Author :        Shivam Rajendra Kale
// Date :          14/05/2025
//
/////////////////////////////////////////////////////////////////////

/*
    Start
        Accept Number from User
         Check factors then
            Display factors in Decreasing order
    Stop         
*/

#include<stdio.h>

void FacRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = (iNo / 2); iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    FacRev(iValue);

    return 0;
}