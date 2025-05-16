/////////////////////////////////////////////////////////////////////////
//
// Name :          problem5.c
// Discription :   Display Difference Summation of factors & non factors
// Input :         integer
// Output :        integer , String
// Author :        Shivam Rajendra Kale
// Date :          14/05/2025
//
//////////////////////////////////////////////////////////////////////////

/*
    Start
        Accept Number from User
         Check factors and non factors
           make summation of factors and non factors
            Display Difference between Summation of factors and non factors
    Stop         
*/

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSum1 = 0;
    int iSum2 = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum1 = iSum1 + iCnt;
        }
        else
        {
            iSum2 = iSum2 + iCnt;
        }
    }

    int iDiff = iSum1 - iSum2;

    return iDiff;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    
    printf("Difference between Summation of factors & non factors : %d",iRet);

    return 0;
}

