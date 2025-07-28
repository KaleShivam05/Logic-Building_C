//////////////////////////////////////////////////////////////////////////
//
// Name :          program2.c
// Discription :   Get input and Display
// Output :        Integer (1 2 3 4)
// Author :        Shivam Rajendra Kale
// Date :          11/07/2025
//
//////////////////////////////////////////////////////////////////////////

/* 
  Start
      Accept input from user
          Display 1 2 3 4 
  Stop    
*/

#include<stdio.h>

void Display(int Size)
{
    // initialize static variable only once
    static int count = 1;

    if(count <= Size)
    {   
        printf("%d\t",count);

        count++;

        Display(Size);
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