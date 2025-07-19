////////////////////////////////////////////////////////////////////////
//
// Name :          program1.c
// Discription :   Count number of ON bits from the input number 
// Input :         Integer
// Output :        Integer 
// Author :        Shivam Rajendra Kale
// Date :          16/06/2025
//
////////////////////////////////////////////////////////////////////////

/*
  Start
    Accept input as number from user
      Count number of ON bits 
       Display count  
  Stop    
*/

#include <stdio.h>

int CountOnBits(int no) 
{
    int count = 0;

    while (no) 
    {
        if (no & 1)  
            count++;
        no = no >> 1;  
    }

    return count;
}

int main() 
{
    int number = 0;

    printf("Enter number :\n");
    scanf("%d", &number);

    int result = CountOnBits(number);
    printf("Number of ON (1) bits: %d\n", result);

    return 0;
}
