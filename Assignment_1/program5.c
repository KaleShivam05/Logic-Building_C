/////////////////////////////////////////////////////////////////
//
// Name :          program5.c
// Discription :   Display numbers of *
// Input :         integer
// Output :        integer , String
// Author :        Shivam Rajendra Kale
// Date :          11/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
       Accept input fron user 
        Display numbers of * on screen 
    Stop         
*/

#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }

}

int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);

    return 0;
}