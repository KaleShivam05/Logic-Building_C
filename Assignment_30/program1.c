////////////////////////////////////////////////////////////////////////
//
// Name :          program1.c
// Discription :   Check whether 15th bit is ON or OFF
// Input :         Integer
// Output :        String
// Author :        Shivam Rajendra Kale
// Date :          13/06/2025
//
///////////////////////////////////////////////////////////////////////

/*
  Start
    Check whether 15th bit is ON or OFF
  Stop    
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
typedef unsigned int UINT;

BOOL CheckBit(UINT iNo)
{
    UINT iMask = 0x00004000;
    int iResult = 0;

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

    bRet = CheckBit(1638);

    if(TRUE == bRet)
    {
        printf("15th bit is ON\n");
    }
    else
    {
        printf("15th bit is OFF\n");
    }

    return 0;
}