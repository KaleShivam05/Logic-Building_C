///////////////////////////////////////////////////////////////////////
//
// Name :          program5.c
// Discription :   Display ASCII value in decimal,octal & hexadecimal
// Input :         Character
// Output :        String ,Integer
// Author :        Shivam Rajendra Kale
// Date :          06/06/2025
//
////////////////////////////////////////////////////////////////////////

/*
  Start
    Accept input from user 
      Display ASCII value in decimal,octal & hexadecimal
  Stop    
*/

#include<stdio.h>

void Display(char ch)
{
    printf("Decimal : %d",ch);
    printf("\nOctal : %o",ch);
    printf("\nhexadecimal : %d",ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter character :");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}
