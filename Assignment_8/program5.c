/////////////////////////////////////////////////////////////////
//
// Name :          program5.c
// Discription :   Convert square feet square meter
// Input :         Integer
// Output :        Integer, String
// Author :        Shivam Rajendra Kale
// Date :          19/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept input from user
            Convert square feet square meter than
              Display
    Stop                  
*/

#include<stdio.h>

double SquareMeter(int iSquareFeet)
{
    double SqFeet = 0.0929;
    double iSquareMeret = 0.0;

    iSquareMeret = (double)iSquareFeet * SqFeet;      //logic

    return iSquareMeret;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter Square feet :");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);   //function call

    printf("The Square Meter is :%lf",dRet);

    return 0;
}