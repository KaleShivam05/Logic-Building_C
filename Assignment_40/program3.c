//////////////////////////////////////////////////////////////////////////
//
// Name :          program3.c
// Discription :   Get input and Display
// Output :        Integer (4 3 2 1)
// Author :        Shivam Rajendra Kale
// Date :          11/07/2025
//
//////////////////////////////////////////////////////////////////////////

/* 
  Start
      Accept input from user
          Display  4 3 2 1   
  Stop    
*/

#include<stdio.h>

void Display(int iSize)
{
    static int count = -1;

    if (count == -1)
    {
        // initialize static variable only once
        count = iSize;
    }      

    if(count >= 1)
    {   
        printf("%d\t",count);

        count--;

        Display(iSize);
    }
    else 
    {
        return;
    }
}

int main()
{
    int iValue = 4;

    Display(iValue);

    return 0;
}