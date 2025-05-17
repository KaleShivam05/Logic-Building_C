/////////////////////////////////////////////////////////////////
//
// Name :          program1.c
// Discription :   Display $ and * for user
// Input :         integer
// Output :        Charecter
// Author :        Shivam Rajendra Kale
// Date :          14/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept Number from User
            Display number of times $ and *
         
    Stop         
*/

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t*\t");
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;

}