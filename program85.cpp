/////////////////////////////////////////////////////////////////
//
//  File name :     program85.cpp
//  Descreption :   work on digit
//  Input :         Integer
//  Output :        Integer
//  Author :        Shivam Rajendra Kale
//  Date :          16/07/2025
//
//////////////////////////////////////////////////////////////////

/*  
    Start
        Accept input from user
            Display Count of Digit
    Stop
*/

#include<iostream>
using namespace std;

int CountOne(int iNo)
{
    int iCount = 0;

    while(iNo != 0)
    {
        iCount = iCount + (iNo % 2);
        iNo = iNo / 2;
    }
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    iRet = CountOne(iValue);

    cout<<"Number of 1 : "<<iRet<<"\n";
    
    return 0;
}