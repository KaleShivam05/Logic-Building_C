//////////////////////////////////////////////////////////////////////////
//
// Name :          program5.c
// Discription :   Toggle first and last nibble
// Input :         Integer
// Output :        String
// Author :        Shivam Rajendra Kale
// Date :          15/06/2025
//
//////////////////////////////////////////////////////////////////////////

/*
  Start
   Accept input from user
        Toggle first and last nibble 
  Stop    
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0xf000000f;
    UINT iResult = 0;

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter number :\n");
    scanf("%u",&iValue);

    iRet = ToggleBit(iValue);

    printf("Updeted number is :%u",iRet);

    return 0;
}