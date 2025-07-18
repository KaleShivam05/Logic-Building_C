/////////////////////////////////////////////////////////////////
//
//  File name :     program86.cpp
//  Descreption :   Display Decimal,Octal,Hexadecimal
//  Input :         Integer
//  Output :        Integer
//  Author :        Shivam Rajendra Kale
//  Date :          17/07/2025
//
//////////////////////////////////////////////////////////////////

/*  
    Start
        Accept input from user
            Display Decimal,Octal,Hexadecimal numbers
    Stop
*/

#include<stdio.h>

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    printf("Number in Decimal format : %d\n",iValue);
    printf("Number in Octal format : %o\n",iValue);
    printf("Number in Hexadecimal format : %x\n",iValue);
    
    return 0;
}