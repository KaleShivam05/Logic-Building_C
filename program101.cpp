/////////////////////////////////////////////////////////////////
//
//  File name :     program101.cpp
//  Descreption :   Toggle the Bit
//  Input :         Integer
//  Output :        Integer
//  Author :        Shivam Rajendra Kale
//  Date :          20/07/2025
//
//////////////////////////////////////////////////////////////////

/*  
    Start
        Accept input from user
            Toggle the Bit
    Stop
*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo, UINT iPos)
{
    UINT iMask = 1;
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0, iLocation = 0, iRet = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    cout<<"Enter the position : \n";
    cin>>iLocation;

    iRet = ToggleBit(iValue, iLocation);

    cout<<"Updated number is : "<<iRet<<"\n";

    return 0;
}