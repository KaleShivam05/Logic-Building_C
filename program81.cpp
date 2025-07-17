/////////////////////////////////////////////////////////////////
//
//  File name :     program81.cpp
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
            Dispaly Binary 
    Stop
*/

#include<iostream>
using namespace std;

void DisplayBinary(int iNo)
{
    int iDigit = 0;
    
    cout<<"Binary conversion is : \n";

    while(iNo != 0)
    {
        iDigit = iNo % 2;
        cout<<iDigit;
        iNo = iNo / 2;
    }
    cout<<endl;
}

int main()
{
    int iValue = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    DisplayBinary(iValue);

    return 0;
}