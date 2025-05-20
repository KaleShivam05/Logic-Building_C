/////////////////////////////////////////////////////////////////
//
// Name :          program3.c
// Discription :   Count frequency of 2 in it
// Input :         Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          19/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept input from user
           check frecquency of 2 in it
            Display 
    Stop                  
*/

#include<stdio.h>

int CountTwo(int iNo)
{
    int iDigit = 0, iCnt = 0;
    
    while(iNo != 0)
    {
        iDigit = iNo % 10; 
        iNo = iNo / 10;

        if(iDigit == 2)
        {
            iCnt++;
        } 
    }

    return iCnt;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);     //function call

    printf("%d",iRet);

    return 0;
}