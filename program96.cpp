/////////////////////////////////////////////////////////////////
//
//  File name :     program96.cpp
//  Descreption :   Check bit is ON or OFF
//  Input :         Integer
//  Output :        Integer
//  Author :        Shivam Rajendra Kale
//  Date :          20/07/2025
//
//////////////////////////////////////////////////////////////////

/*  
    Start
        Accept input from user
            Check bit is ON or OFF
    Stop
*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo, UINT iPos)
{
    UINT iMask = 1;
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);
    iResult = iNo & iMask;

    return (iResult == iMask);
}

int main()
{
    UINT iValue = 0, iLocation = 0;
    bool bRet = false;

    cout<<"Enter number : \n";
    cin>>iValue;

    cout<<"Enter the position : \n";
    cin>>iLocation;

    bRet = CheckBit(iValue, iLocation);

    if(bRet == true)
    {
        cout<<"Bit is ON at location "<<iLocation<<"\n";
    }
    else
    {
        cout<<"Bit is OFF at location "<<iLocation<<"\n";
    }

    return 0;
}