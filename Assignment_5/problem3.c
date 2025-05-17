/////////////////////////////////////////////////////////////////
//
// Name :          program3.c
// Discription :   Display number line
// Input :         integer
// Output :        integer 
// Author :        Shivam Rajendra Kale
// Date :          14/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept Number from User
            Dislpay number line
        
    Stop         
*/

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    if(iNo > 0)
    {
        for(iCnt = -iNo; iCnt <= iNo; iCnt++)
        {
            printf("%d\t",iCnt);
        }
    }    
    else
    {
        for(iCnt = iNo; iCnt >= -iNo; iCnt++)
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

    Display(iValue);

    return 0;
}