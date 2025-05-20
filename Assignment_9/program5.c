/////////////////////////////////////////////////////////////////
//
// Name :          program5.c
// Discription :   Display digits less than 6
// Input :         Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          19/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept input from user
            Check digits less than 6 than
              Display  count
    Stop                  
*/

#include<stdio.h>

int Count(int iNo)
{
    int iDigit = 0, iCount = 0;
    
    while(iNo != 0)
    {
        iDigit = iNo % 10; 
        iNo = iNo / 10;

        if(iDigit < 6)
        {
            iCount++;
        } 
    }

    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = Count(iValue);     //function call

    printf("%d",iRet);

    return 0;
}