////////////////////////////////////////////////////////////////////////
//
// Name :          program3.c
// Discription :   Check whether 7th & 15th 21th & 28th bit is ON or OFF
// Input :         Integer
// Output :        String
// Author :        Shivam Rajendra Kale
// Date :          13/06/2025
//
///////////////////////////////////////////////////////////////////////

/*
  Start
    Check whether 7th & 15th 21th & 28th bit is ON or OFF
  Stop    
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
typedef unsigned int UINT;

BOOL CheckBit(UINT iNo, int iPos)
{
    UINT iMask = 1;
    int iResult = 0;

    iMask = 1 << (iPos - 1);

    iResult = iNo & iMask;

    if(iResult == 0)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

int main()
{
    BOOL bRet = FALSE;
    UINT iValue = 0;

    printf("Enter number :\n");
    scanf("%u",&iValue);

    bRet = CheckBit(iValue, 7);

    if(TRUE == bRet)
    {
        printf("7th bit is ON\n");
    }
    else
    {
        printf("7th bit is OFF\n");
    }

    bRet = CheckBit(iValue, 15);

    if(TRUE == bRet)
    {
        printf("15th bit is ON\n");
    }
    else
    {
        printf("15th bit is OFF\n");
    }

    bRet = CheckBit(iValue, 21);

    if(TRUE == bRet)
    {
        printf("21th bit is ON\n");
    }
    else
    {
        printf("21th bit is OFF\n");
    }

    bRet = CheckBit(iValue, 28);

    if(TRUE == bRet)
    {
        printf("28th bit is ON\n");
    }
    else
    {
        printf("28th bit is OFF\n");
    }

    return 0;
}