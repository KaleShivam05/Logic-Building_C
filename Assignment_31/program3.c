////////////////////////////////////////////////////////////////////////
//
// Name :          program3.c
// Discription :   Toggle 7th bit
// Input :         Integer
// Output :        String
// Author :        Shivam Rajendra Kale
// Date :          14/06/2025
//
///////////////////////////////////////////////////////////////////////

/*
  Start
   Accept input from user
    Check whether 7th bit is ON or OFF
     if 7th bit is ON than
      OFF the bit 
     if 7th bit is OFF than
      ON the bit  
      Display updeted number

  Stop    
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0x00000040;
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

    printf("Updeted number is :%d",iRet);

    return 0;
}