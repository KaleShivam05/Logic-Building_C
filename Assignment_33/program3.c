////////////////////////////////////////////////////////////////////////
//
// Name :          program3.c
// Discription :   Check whether 9 or 12 bit is on or off
// Input :         Integer
// Output :        String
// Author :        Shivam Rajendra Kale
// Date :          16/06/2025
//
///////////////////////////////////////////////////////////////////////

/*
  Start
   Accept input as number & bit position from user
        Check whether 9 or 12 bit is on or off

  Stop    
*/

#include <stdio.h>

void checkBits(int num) 
{
    int mask1 = 1 << 8;   
    int mask2 = 1 << 11; 

    int bit9 = num & mask1;
    int bit12 = num & mask2;

    if (bit9)
    {
        printf("9th bit is ON\n");
    }   
    else
    {
        printf("9th bit is OFF\n");
    }

    if (bit12)
    {
        printf("12th bit is ON\n");
    }
    else
    {
        printf("12th bit is OFF\n");
    }
}

int main() 
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    checkBits(number);

    return 0;
}
