/////////////////////////////////////////////////////////////////
//
//  File name :     program116.cpp
//  Descreption :   Call by reference
//  Input :         Integer
//  Output :        Integer
//  Author :        Shivam Rajendra Kale
//  Date :          21/07/2025
//
//////////////////////////////////////////////////////////////////

/*  
    Start
        Accept input from user
            Demonstret Call by reference
    Stop
*/

#include<iostream>
using namespace std;

// Call by reference
void Swap(int &No1, int &No2)
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