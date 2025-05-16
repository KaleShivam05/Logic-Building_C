/////////////////////////////////////////////////////////////////
//
// Name :          problem1.c
// Discription :   Display factors on screen
// Input :         integer
// Output :        integer , String
// Author :        Shivam Rajendra Kale
// Date :          13/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept Number from User
           Check factors of number then 
              Display factors
    Stop         
*/

#include<stdio.h>

void DisplayFactor(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0) 
    {
        iNo = -iNo;
    } 

    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
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

    printf("Enter number\n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}

