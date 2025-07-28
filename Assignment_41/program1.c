//////////////////////////////////////////////////////////////////////////
//
// Name :          program1.c
// Discription :   Get input and Display
// Input :         Integer (4) 
// Output :        Charecter (* * * *)
// Author :        Shivam Rajendra Kale
// Date :          13/07/2025
//
//////////////////////////////////////////////////////////////////////////

/* 
  Start
      Accept input from user
          Display *     
  Stop    
*/

#include<stdio.h>

void Display(int Size)
{
    // initialize static variable only once
    static int count = 1;

    if(count <= Size)
    {   
        printf("*\t");

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