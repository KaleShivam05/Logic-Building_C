/////////////////////////////////////////////////////////////////////
//
// Name :          problem1.c
// Discription :   Display frist number in second numbers of time
// Input :         integer
// Output :        integer , String
// Author :        Shivam Rajendra Kale
// Date :          12/05/2025
//
//////////////////////////////////////////////////////////////////////

/*
    Start
        Accept two Number from User
          Display frist number in second number of time  
    Stop         
*/

#include<stdio.h>

void Display(int iNo , int iFrequency)
{
    int iCnt = 0;

    if(iFrequency < 0)     //Updator
    {
       iFrequency = -iFrequency;
    }

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\t",iNo);
    }
   

}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number : ");
    scanf("%d",&iValue1);

    printf("Enter number : ");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}