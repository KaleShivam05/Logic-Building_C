///////////////////////////////////////////////////////////////////////
//
// Name :          program3.c
// Discription :   Display all non factors
// Input :         integer
// Output :        integer , String
// Author :        Shivam Rajendra Kale
// Date :          14/05/2025
//
///////////////////////////////////////////////////////////////////////

/*
    Start
        Accept Number from User
         Check factors and non factors
            Display non factors 
    Stop         
*/

#include<stdio.h>

void NonFact(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
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

    NonFact(iValue);

    return 0;
}