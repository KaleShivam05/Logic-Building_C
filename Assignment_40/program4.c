//////////////////////////////////////////////////////////////////////////
//
// Name :          program4.c
// Discription :   Get input and Display
// Output :        Charecter (A B C D)
// Author :        Shivam Rajendra Kale
// Date :          11/07/2025
//
//////////////////////////////////////////////////////////////////////////

/* 
  Start
      Accept input from user
          Display  A B C D 
  Stop    
*/

#include<stdio.h>

void Display(char iSize)
{
    static int count = 1;  
    static char ch = 'A';
    

    if(count <= iSize)
    {   
        printf("%c\t",ch);

        count++;
        ch++;
    
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