/////////////////////////////////////////////////////////////////
//
//  File name :     program94.cpp
//  Descreption :   Check 12th bit is ON or OFF
//  Input :         Integer
//  Output :        Integer
//  Author :        Shivam Rajendra Kale
//  Date :          17/07/2025
//
//////////////////////////////////////////////////////////////////

/*  
    Start
        Accept input from user
            Check 12th bit is ON or OFF
    Stop
*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask = 2048;
    UINT iResult = 0;

    iResult = iNo & iMask;

    return (iResult == iMask);
}

int main()
{
    UINT iValue = 0;
    bool bRet = false;

    cout<<"Enter number : \n";
    cin>>iValue;

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        cout<<"12th bit is ON\n";
    }
    else
    {
        cout<<"12th bit is OFF\n";
    }

    return 0;
}