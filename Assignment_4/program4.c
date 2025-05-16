////////////////////////////////////////////////////////////////////
//
// Name :          problem4.c
// Discription :   Display summation of non factors
// Input :         integer
// Output :        integer , String
// Author :        Shivam Rajendra Kale
// Date :          14/05/2025
//
////////////////////////////////////////////////////////////////////

/*
    Start
        Accept Number from User
         Check factors then
           Display Summation of non factors
    Stop         
*/

#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
           iSum = iSum + iCnt;
        }
    }

    return iSum;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);
    
    printf("Summation of non factors number : %d",iRet);

    return 0;

}