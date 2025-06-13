////////////////////////////////////////////////////////////////////
//
// Name :          program5.c
// Discription :   Display timing of exam accoding to division
// Input :         Character
// Output :        String
// Author :        Shivam Rajendra Kale
// Date :          05/06/2025
//
////////////////////////////////////////////////////////////////////

/*
  Start
    Accept input from user 
      if the division is A than
        Display Your exam at 7 AM
      if the division is B than
        Display Your exam at 8:30 AM
      if the division is C than
        Display Your exam at 9:20 AM
      if the division is D than
        Display Your exam at 10:30 AM  
  Stop    
*/

#include<stdio.h>

void CheckTiming(char ch)
{
    if('A' == ch)
    {
      printf("Your exam at 7 AM");
    }
    else if('B' == ch)
    {
      printf("Your exam at 8:30 AM");
    }
    else if('C' == ch)
    {
      printf("Your exam at 9:20 AM");
    }
    else if('D' == ch)
    {
      printf("Your exam at 10:30 AM");
    }
    else
    {
      printf("Wrong input");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character :");
    scanf("%c",&cValue);

    CheckTiming(cValue);

    return 0;
}
