/////////////////////////////////////////////////////////////////
//
// Name :          program2.c
// Discription :   Display pattern
// Input :         Integer
// Output :        Integer, Charecter
// Author :        Shivam Rajendra Kale
// Date :          20/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept number from user
            Display 5  #  4  #  3  #  2  #  1  #    
    Stop                  
*/

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t#\t",iCnt);
    }   
}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    Pattern(iValue);   //function call

    return 0;
}