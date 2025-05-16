/////////////////////////////////////////////////////////////////
//
// Name :          problem3.c
// Discription :   Display 5 to 1 numbers
// Input :         integer
// Output :        integer , String
// Author :        Shivam Rajendra Kale
// Date :          11/05/2025
//
/////////////////////////////////////////////////////////////////


#include<stdio.h>

void Display()
{
    int iCnt = 0;

    iCnt = 5;
    while(iCnt >= 1)
    {
        printf("%d\n",iCnt);
        iCnt--;
    }

}
int main()
{
    Display();

    return 0;
}