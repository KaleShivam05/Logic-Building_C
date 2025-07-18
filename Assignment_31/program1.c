////////////////////////////////////////////////////////////////////////
//
// Name :          program1.c
// Discription :   Change 7th bit is ON to OFF 
// Input :         Integer
// Output :        Integer , stirng
// Author :        Shivam Rajendra Kale
// Date :          14/06/2025
//
///////////////////////////////////////////////////////////////////////

/*
  Start
   Accept input from user
    Check whether 7th bit is ON or OFF
     if 7th bit is ON than
      OFF the bit & 
      Display updeted number

  Stop    
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0x00000040;
    UINT iResult = 0;

    iMask = ~iMask;

    iResult = iNo & iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter number :\n");
    scanf("%u",&iValue);

    iRet = OffBit(iValue);

    printf("Updeted number is :%d",iRet);

    return 0;
}