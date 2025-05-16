/////////////////////////////////////////////////////////////////
//
// Name :          program1.c
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
    if(iNo < 0)     //Updator
    {
        iNo = -iNo;
    }

    while(iNo >= 1)
    {
        printf("*");
        iNo--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enetr number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
