/////////////////////////////////////////////////////////////////////////
//
// Name :          program2.c
// Discription :   Display corresponding character 
// Input :         Character
// Output :        Character
// Author :        Shivam Rajendra Kale
// Date :          06/06/2025
//
//////////////////////////////////////////////////////////////////////////

/*
    Start
      Accept input from user  
         if the Character Capital than
            Display small Character
         if the Character small than
            Display Capital Character
    Stop             
*/

#include<stdio.h>

void Conver(char ch)
{
    int iCnt = 0, iDisplacement = 0;

    if((ch >= 'A') && (ch <= 'Z'))
    {
       ch = ch + 32;
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
      ch = ch - 32;
    }

    printf("%c",ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter character :");
    scanf("%c",&cValue);

    Conver(cValue);

    return 0;
}
