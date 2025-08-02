//////////////////////////////////////////////////////////////////////////
//
// Name :          program1.c
// Discription :   Get input and Display pattern
// Input :         Integer (4) 
// Output :        Charecter (4 * 3 * 2 * 1 *)
// Author :        Shivam Rajendra Kale
// Date :          20/07/2025
//
//////////////////////////////////////////////////////////////////////////

/* 
  Start
      Accept input from user
          Display  4 * 3 * 2 * 1 *
  Stop    
*/

#include<stdio.h>

void Display(int Size)
{
    // initialize static variable only once
    static int count = -1;

    if(count == -1)
    {
        count = Size;
    }

    if(count >= 1)
    {   
        printf("%d\t",count);
        printf("*\t");

        count--;

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