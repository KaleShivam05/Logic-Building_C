////////////////////////////////////////////////////////////////////////
//
// Name :          program1.c
// Discription :   Check whether 5th & 18th bit is ON or OFF
// Input :         Integer
// Output :        String
// Author :        Shivam Rajendra Kale
// Date :          13/06/2025
//
///////////////////////////////////////////////////////////////////////

/*
  Start
    Check whether 5th & 18th bit is ON or OFF
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

    bRet = CheckBit(iValue, 5);

    if(TRUE == bRet)
    {
        printf("15th bit is ON\n");
    }
    else
    {
        printf("15th bit is OFF\n");
    }

    bRet = CheckBit(iValue, 18);

    if(TRUE == bRet)
    {
        printf("18th bit is ON\n");
    }
    else
    {
        printf("18th bit is OFF\n");
    }

    return 0;
}