////////////////////////////////////////////////////////////////////////
//
// Name :          program1.c
// Discription :   Check bit is ON or OFF Bitwise
// Input :         Integer
// Output :        Integer , stirng
// Author :        Shivam Rajendra Kale
// Date :          15/06/2025
//
////////////////////////////////////////////////////////////////////////

/*
  Start
    Accept input as number & position from user
      check bit is on or off
      
  Stop    
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef unsigned int UINT;
typedef int BOOL;

BOOL CheckBit(UINT iNo , int iPos)
{
    UINT iMask = 1;
    int iResult = 0;

    iMask = 1 << (iPos -1);

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
    UINT iValue1 = 0;
    int iValue2 = 0;
    BOOL bRet = 0;

    printf("Enter number :\n");
    scanf("%u",&iValue1);

    printf("Enter position :\n");
    scanf("%d",&iValue2);

    bRet = CheckBit(iValue1, iValue2);

    if(TRUE == bRet)
    {
        printf("%dth bit is No\n",iValue2);
    }
    else 
    {
        printf("%dth bit is OFF\n",iValue2);
    }

    return 0;

}
