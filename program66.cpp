/////////////////////////////////////////////////////////////////
//
//  File name :     program66.cpp
//  Descreption :   Addition of two numbers
//  Input :         Integer
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

int Addition(int No1, int No2)
{
    int Ans;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    int Ret;

    Ret = Addition(10,11);

    cout<<"Addition is : "<<Ret<<"\n";

    return 0;
}