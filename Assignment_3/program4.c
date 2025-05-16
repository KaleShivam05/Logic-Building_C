/////////////////////////////////////////////////////////////////
//
// Name :          program4.c
// Discription :   Convert case of character
// Input :         integer
// Output :        charecter , String
// Author :        Shivam Rajendra Kale
// Date :          13/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept Charecter from User
            if Charecter is capital then
               Convert into Small letter and Display
    Stop         
*/

#include<stdio.h>

void DisplayConvert(char CValue)
{
    if((CValue >= 'a') && (CValue <= 'z'))
    {
        printf("%c",CValue - 32);
    }
    else if((CValue >= 'A') && (CValue <= 'Z'))
    {
        printf("%c",CValue + 32);
    }

}

int main()
{
    char cValue = '\0';

    printf("Enter character : ");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}
