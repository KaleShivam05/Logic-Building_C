/////////////////////////////////////////////////////////////////
//
// Name :          program1.c
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
            Display A  B  C  D  E
    Stop                  
*/

#include<stdio.h>

void pattern(int iNo)
{
    int iCnt = 0;
    char ch = 'A';

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t",ch);
        ch++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    pattern(iValue);   //function call

    return 0;
}