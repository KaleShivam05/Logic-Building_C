/////////////////////////////////////////////////////////////////
//
// Name :          program3.c
// Discription :   Display "Hello" if input is less then 10
// Input :         integer
// Output :        String
// Author :        Shivam Rajendra Kale
// Date :          12/05/2025
//
/////////////////////////////////////////////////////////////////


#include<stdio.h>

void Display(int iNo)
{
    if(iNo <= 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}