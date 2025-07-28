//////////////////////////////////////////////////////////////////////////
//
// Name :          program2.c
// Discription :   Get input and Display
// Input :         Integer (4) 
// Output :        Charecter (1 2 3 4)
// Author :        Shivam Rajendra Kale
// Date :          13/07/2025
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
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}