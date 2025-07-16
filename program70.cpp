/////////////////////////////////////////////////////////////////
//
//  File name :     program70.cpp
//  Descreption :   Addition of two numbers
//  Output :        Integer
//  Author :        Shivam Rajendra Kale
//  Date :          15/07/2025
//
//////////////////////////////////////////////////////////////////

/*  
    Start
        Accept input from user
            return addition of two numbers
    Stop
*/


#include<iostream>
using namespace std;

template <class T>
T Addition(T No1, T No2)
{
    T Ans;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    cout<<Addition(10,11)<<"\n";
    cout<<Addition(10.90f,11.70f)<<"\n";
    cout<<Addition(10.70,11.60)<<"\n";

    return 0;
}