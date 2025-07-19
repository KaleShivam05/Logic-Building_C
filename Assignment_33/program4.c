////////////////////////////////////////////////////////////////////////
//
// Name :          program4.c
// Discription :   Check bits on of off
// Input :         Integer
// Output :        bool
// Author :        Shivam Rajendra Kale
// Date :          16/06/2025
//
///////////////////////////////////////////////////////////////////////

/*
  Start
   Accept input as number & bit position from user
        Check bits on of off
  Stop    
*/

#include<stdio.h>
#include<stdbool.h>

bool ChkBit(int num, int pos1, int pos2) 
{
    bool bRet = false, bRet2 = false;

    int mask1 = 1 << (pos1 - 1); 
    int mask2 = 1 << (pos2 - 1); 

    if (num & mask1)
    {
        bRet = true;
    }
    else
    {
        bRet = false;
    }

    if (num & mask2)
    {
        bRet2 = true;
    }
    else
    {
        bRet2 = false;
    }

    if(bRet = true && bRet2 == true)
    {
        return true;
    }
    else 
    {
       return false;
    }
}

int main() 
{
    int number, pos1, pos2;
    bool bRet = false;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter first position: ");
    scanf("%d", &pos1);

    printf("Enter second position: ");
    scanf("%d", &pos2);

    bRet = ChkBit(number, pos1, pos2);

    if(bRet == true)
    {
        printf("true");
    }
    else 
    {
        printf("false");
    }

    return 0;
}
