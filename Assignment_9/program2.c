/////////////////////////////////////////////////////////////////
//
// Name :          program2.c
// Discription :   Check whether number contains o in it or not
// Input :         Integer
// Output :        Integer, String 
// Author :        Shivam Rajendra Kale
// Date :          19/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept number from user
            if number contains 0 in it than
              Dispaly It contains Zero
            if number not contains Zero than
              Display There is no Zero             
    Stop                  
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;
    
    while(iNo != 0)
    {
        iDigit = iNo % 10; 
        iNo = iNo / 10;

        if(iDigit == 0)
        {
            return TRUE;
        } 
    }

    return FALSE;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);  //function call

    if(bRet == TRUE)
    {
        printf("It Contain Zero");
    }
    else
    {
        printf("Ther is no Zero ");
    }

    return 0;
}

