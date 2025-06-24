//////////////////////////////////////////////////////////////////////////
//
// Name :          program5.c
// Discription :   Check whether 1th & 32th bit is ON or OFF
// Input :         Integer
// Output :        String
// Author :        Shivam Rajendra Kale
// Date :          13/06/2025
//
//////////////////////////////////////////////////////////////////////////

/*
  Start
    Check whether 1th & 32th bit is ON or OFF
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

    bRet = CheckBit(iValue, 1);

    if(TRUE == bRet)
    {
        printf("1th bit is ON\n");
    }
    else
    {
        printf("1th bit is OFF\n");
    }

    bRet = CheckBit(iValue, 32);

    if(TRUE == bRet)
    {
        printf("32th bit is ON\n");
    }
    else
    {
        printf("32th bit is OFF\n");
    }

    return 0;
}