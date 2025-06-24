//////////////////////////////////////////////////////////////////////////
//
// Name :          program4.c
// Discription :   Check whether 7th & 8th & 9th bit is ON or OFF
// Input :         Integer
// Output :        String
// Author :        Shivam Rajendra Kale
// Date :          13/06/2025
//
//////////////////////////////////////////////////////////////////////////

/*
  Start
    Check whether 7th & 8th & 9th bit is ON or OFF
  Stop    
*/

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT iNo, int iPos)
{
    UINT iMAsk = 1;
    UINT iResult = 0;

    iMAsk = 1 << (iPos - 1);

    iResult = iNo & iMAsk;

    if(0 == iResult)
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
    UINT iValue = 0;
    BOOL bRet = FALSE;

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

    bRet = CheckBit(iValue, 8);

    if(TRUE == bRet)
    {
        printf("8th bit is ON\n");
    }
    else
    {
        printf("8th bit is OFF\n");
    }

    bRet = CheckBit(iValue, 9);

    if(TRUE == bRet)
    {
        printf("9th bit is ON\n");
    }
    else
    {
        printf("9th bit is OFF\n");
    }
}