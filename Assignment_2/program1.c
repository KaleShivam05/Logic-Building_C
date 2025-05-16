/////////////////////////////////////////////////////////////////
//
// Name :          problem1.c
// Discription :   Display numbers of * on screen
// Input :         integer
// Output :        String
// Author :        Shivam Rajendra Kale
// Date :          12/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept Number from User
            Display number of * on screen
          
    Stop         
*/

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)        //Updator
    {
        iNo = -iNo;
    }

    while(iCnt <= iNo)
    {
        printf("*");
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}