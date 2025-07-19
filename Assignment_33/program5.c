//////////////////////////////////////////////////////////////////////////
//
// Name :          program5.c
// Discription :   Toggle bits range
// Input :         Integer
// Output :        String
// Author :        Shivam Rajendra Kale
// Date :          16/06/2025
//
//////////////////////////////////////////////////////////////////////////

/*
  Start
   Accept input from user
        Toggle bits range
  Stop    
*/

#include <stdio.h>

int ToggleBitRange(int no, int start, int end) 
{
    int mask = 0;

    for (int i = start; i <= end; i++) 
    {
        mask |= (1 << (i - 1));  
    }

    return no ^ mask; 
}

int main() 
{
    int number = 0, start = 0, end = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter start position: ");
    scanf("%d", &start);

    printf("Enter end position: ");
    scanf("%d", &end);

    int result = ToggleBitRange(number, start, end);

    printf("Number after toggling bits from position %d to %d: %d\n", start, end, result);

    return 0;
}
