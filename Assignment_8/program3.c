/////////////////////////////////////////////////////////////////
//
// Name :          program3.c
// Discription :   Convert kilometer into Meter
// Input :         Integer
// Output :        Integer, String
// Author :        Shivam Rajendra Kale
// Date :          19/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept input from user
          Covert Kilometer into meter than
            Display 
    Stop                  
*/

#include<stdio.h>

#define ERR_INVALID -1

int KMtoMeter(int iKillo)
{
    int iMeter = 1000;
    int iKilometer = 0;

    if(iKillo < 0)                   //filter
    {
        return ERR_INVALID;
    }

    iKilometer = iKillo * iMeter;     //logic

    return iKilometer;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance in kilometre :");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);     //function call

    if(iRet == ERR_INVALID)
    {
        printf("wrong input \n");
    }
    else
    {
        printf("Distance in Meter is :%d",iRet);
    }

    return 0;
}