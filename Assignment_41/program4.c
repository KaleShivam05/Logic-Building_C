//////////////////////////////////////////////////////////////////////////
//
// Name :          program4.c
// Discription :   Get input and Display
// Input :         Integer (4) 
// Output :        Charecter (A B C D)
// Author :        Shivam Rajendra Kale
// Date :          13/07/2025
//
//////////////////////////////////////////////////////////////////////////

/* 
  Start
      Accept input from user
          Display  A B C D ++
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
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    Display(iValue);
   

    return 0;
}