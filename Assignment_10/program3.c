/////////////////////////////////////////////////////////////////
//
// Name :          program3.c
// Discription :   Count of Digits between 3 & 7
// Input :         Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          20/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept input from user
           Count of Digits between 3 & 7
            Display Count on consol
    Stop                  
*/

#include<stdio.h>

int CheckOdd(int iNo)
{
    int iDigit = 0, iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if((iDigit > 3) && (iDigit < 7))
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

    iRet = CheckOdd(iValue);   //function call

    printf("%d",iRet);

    return 0;

}
