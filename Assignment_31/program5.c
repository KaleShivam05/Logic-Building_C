//////////////////////////////////////////////////////////////////////////
//
// Name :          program5.c
// Discription :   ON first 4 bits
// Input :         Integer
// Output :        String
// Author :        Shivam Rajendra Kale
// Date :          14/06/2025
//
//////////////////////////////////////////////////////////////////////////

/*
  Start
   Accept input from user
        ON its first 4 bits  
  Stop    
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0x0000000f;
    UINT iResult = 0;

    iResult = iNo | iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter number :\n");
    scanf("%u",&iValue);

    iRet = ToggleBit(iValue);

    printf("Updeted number is :%d",iRet);

    return 0;
}