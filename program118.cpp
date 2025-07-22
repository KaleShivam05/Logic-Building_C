/////////////////////////////////////////////////////////////////
//
//  File name :     program118.cpp
//  Descreption :   Allocate dynamic memory in c++
//  Input :         Integer
//  Output :        Integer
//  Author :        Shivam Rajendra Kale
//  Date :          21/07/2025
//
//////////////////////////////////////////////////////////////////

/*  
    Start
        Accept input from user
            Allocate dynamic memory
    Stop
*/

#include<iostream>
using namespace std;

int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0;

    cout<<"Enter number of elements : \n";
    cin>>iLength;

    ptr = new int[iLength];

    cout<<"Enter the elements : \n";
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cin>>ptr[iCnt];
    }

    cout<<"Elements of the array are : \n";
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cout<<ptr[iCnt]<<"\n";
    }

    return 0;
}