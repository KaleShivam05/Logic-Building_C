/////////////////////////////////////////////////////////////////
//
//  File name :     program87.cpp
//  Descreption :   Display Decimal,Octal,Hexadecimal
//  Input :         Integer
//  Output :        Integer
//  Author :        Shivam Rajendra Kale
//  Date :          17/07/2025
//
//////////////////////////////////////////////////////////////////

/*  
    Start
        Accept input from user
            Display Decimal,Octal,Hexadecimal numbers
    Stop
*/

#include<iostream>
using namespace std;

int main()
{
    int iValue = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    cout<<"Number in Decimal format : "<<std::dec<<iValue<<"\n";
    cout<<"Number in Octal format : "<<std::oct<<iValue<<"\n";
    cout<<"Number in Hexadecimal format : "<<std::hex<<iValue<<"\n";

    return 0;
}