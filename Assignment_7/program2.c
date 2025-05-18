/////////////////////////////////////////////////////////////////
//
// Name :          program2.c
// Discription :   Check number 
// Input :         integer
// Output :        integer 
// Author :        Shivam Rajendra Kale
// Date :          18/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept input from user
            Convert into INR
    Stop                  
*/

#include<stdio.h>

int DollarToINR(int iNo)
{
    int iDoll = 70;
    int iINR = 0;

    iINR = iDoll * iNo;

    return iINR;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is :%d",iRet);

    return 0;
}