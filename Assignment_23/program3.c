/////////////////////////////////////////////////////////////////////////
//
// Name :          program3.c
// Discription :   Didplay character   
// Input :         Integer
// Output :        string
// Author :        Shivam Rajendra Kale
// Date :          06/06/2025
//
//////////////////////////////////////////////////////////////////////////

/*
   Start
      Accept input from user 
            if the input is Capital character than
               Display all Character till Z
            if the input is small character than
               Display all Character in reverse order till a
    Stop         
*/

#include<stdio.h>

void DisplayCharacter(char ch)
{
    int iCnt = 0;
    
    if((ch >= 'A') && (ch <= 'Z'))
    {
         while(ch != 'Z')
         {
            printf("%c\t",ch);
            ch++;
         } 
         printf("Z");
    }

    if((ch >= 'a') && (ch <= 'z'))
    {
         while(ch != 'a')
         {
            printf("%c\t",ch);
            ch--;
         }   
         printf("a");

    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character :");
    scanf("%c",&cValue);

    DisplayCharacter(cValue);

    return 0;
}
