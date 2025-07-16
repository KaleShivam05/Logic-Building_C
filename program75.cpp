/////////////////////////////////////////////////////////////////
//
//  File name :     program75.cpp
//  Descreption :   Allocate dynamic memeory
//  Input :         Integer
//  Output :        Integer
//  Author :        Shivam Rajendra Kale
//  Date :          15/07/2025
//
//////////////////////////////////////////////////////////////////

/*  
    Start
        Accept input from user
            Allocate dynamic memeory
    Stop
*/

#include<iostream>
using namespace std;

int main()
{
    int Size;

    cout<<"Enter number of elements : \n";
    cin>>Size;

    int * ptr = new int[Size];
    
    // Use

    delete []ptr;
    
    return 0;
}