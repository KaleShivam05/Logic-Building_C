/////////////////////////////////////////////////////////////////
//
// Name :          program4.c
// Discription :   Count frequency of 4 in it 
// Input :         Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          19/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept input from user
            Check frecquency of 4 in it
                Display        
    Stop                  
*/

#include<stdio.h>

int CountFour(int iNo)
{
    int iDigit = 0, iCnt = 0;
    
    while(iNo != 0)
    {
        iDigit = iNo % 10; 
        iNo = iNo / 10;

        if(iDigit == 4)
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

    iRet = CountFour(iValue);     //function call

    printf("%d",iRet);

    return 0;
}