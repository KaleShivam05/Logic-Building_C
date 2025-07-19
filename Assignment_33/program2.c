////////////////////////////////////////////////////////////////////////
//
// Name :          program2.c
// Discription :   Display Common bits
// Input :         Integer
// Output :        String, Integer
// Author :        Shivam Rajendra Kale
// Date :          16/06/2025
//
///////////////////////////////////////////////////////////////////////

/*
  Start
   Accept input as number & bit position from user
        Display Common bits
  Stop    
*/

#include <stdio.h>

void CommonBits(int no1, int no2) 
{
    int pos = 1; 
    int iCommon = no1 & no2;

    printf("Common ON bit positions:\n");

    while (iCommon != 0) 
    {
        if (iCommon & 1) 
        {
            printf("%d\t", pos);
        }
        iCommon = iCommon >> 1; 
        pos++;
    }
}

int main() {
    int iValue1 = 0, iValue2 = 0;

    printf("Enter first number: ");
    scanf("%d", &iValue1);

    printf("Enter second number: ");
    scanf("%d", &iValue2);

    CommonBits(iValue1, iValue2);

    return 0;
}


