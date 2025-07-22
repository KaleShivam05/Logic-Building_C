/////////////////////////////////////////////////////////////////
//
//  File name :     program113.cpp
//  Descreption :   Call by value
//  Input :         Integer
//  Output :        Integer
//  Author :        Shivam Rajendra Kale
//  Date :          21/07/2025
//
//////////////////////////////////////////////////////////////////

/*  
    Start
        Accept input from user
            Demonstret Call by value
    Stop
*/

#include<iostream>
using namespace std;

// Call by value
void Swap(int No1, int No2)
{
    int temp = 0;

    temp = No1;
    No1 = No2;
    No2 = temp;
}

int main()
{
    int a = 10, b = 11;
   
    Swap(a,b);

    cout<<"Value of a : "<<a<<"\n";
    cout<<"Value of b : "<<b<<"\n";
    
    return 0;
}