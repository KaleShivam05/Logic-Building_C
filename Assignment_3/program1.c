/////////////////////////////////////////////////////////////////
//
// Name :          problem1.c
// Discription :   Display even numbers on screen
// Input :         integer
// Output :        integer , String
// Author :        Shivam Rajendra Kale
// Date :          13/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
      Accept Number from User
        Check even numbers then
           Display even numbers

        
    Stop         
*/

#include<stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
       if((iCnt % 2) == 0)
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

    if(iValue <= 0)
    {
       return -1;
    }

    PrintEven(iValue);

    return 0;

}