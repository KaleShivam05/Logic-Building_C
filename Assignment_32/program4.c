////////////////////////////////////////////////////////////////////////
//
// Name :          program4.c
// Discription :   Toggle bit 
// Input :         Integer
// Output :        String, Integer
// Author :        Shivam Rajendra Kale
// Date :          15/06/2025
//
///////////////////////////////////////////////////////////////////////

/*
  Start
   Accept input as number & bit position from user
        Toggle that position bit

  Stop    
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef unsigned int UINT;

UINT OffBit(UINT iNo, int iPos)
{
    UINT iMask = 1;
    UINT iResult = 0;

    iMask = 1 << (iPos - 1);

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue1 = 0;
    int iValue2 = 0;
    UINT iRet = 0;

    printf("Enter number :\n");
    scanf("%u",&iValue1);

    printf("Enter position :\n");
    scanf("%d",&iValue2);

    iRet = OffBit(iValue1, iValue2);

    printf("Updeted number is :%d",iRet);

    return 0;
}