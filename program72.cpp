/////////////////////////////////////////////////////////////////
//
//  File name :     program72.cpp
//  Descreption :   Display maximum number
//  Input :         Integer
//  Output :        Integer
//  Author :        Shivam Rajendra Kale
//  Date :          15/07/2025
//
//////////////////////////////////////////////////////////////////

/*  
    Start
        Accept input from user
            Display maximum number
    Stop
*/


#include<iostream>
using namespace std;

// 12   16  11
int Maximum(int No1, int No2, int No3)
{
    if((No1 > No2) && (No1 > No3))
    {
        return No1;
    }
    else if((No2 > No1) && (No2 > No3))
    {
        return No2;
    }
    else
    {
        return No3;
    }
}


int main()
{
    cout<<Maximum(14,18,11)<<"\n";
    cout<<Maximum(21,18,27)<<"\n";
    
    return 0;
}