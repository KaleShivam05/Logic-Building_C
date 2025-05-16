////////////////////////////////////////////////////////////////////
//
// Name :          program1.c
// Discription :   Display Multiplication of factors
// Input :         integer
// Output :        integer , String
// Author :        Shivam Rajendra Kale
// Date :          14/05/2025
//
////////////////////////////////////////////////////////////////////


/*
    Start
        Accept Number from User
         Check factors of a numbers 
           then Display multiplication of factors
    Stop         
*/


#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iSum = 1;

    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum * iCnt;
        }
    }

    return iSum;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);

    return 0;
}