/////////////////////////////////////////////////////////////////
//
//  File name :     program79.cpp
//  Descreption :   Allocate dynamic memeory
//  Input :         Integer
//  Output :        Integer
//  Author :        Shivam Rajendra Kale
//  Date :          16/07/2025
//
//////////////////////////////////////////////////////////////////

/*  
    Start
        Accept input from user
            Allocate dynamic memeory
            Display All elements from Array
    Stop
*/

#include<iostream>
using namespace std;

template <class T>
void Display(T Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }
}

int main()
{
    int Size, iCnt = 0;

    cout<<"Enter number of elements : \n";
    cin>>Size;

    int * ptr = new int[Size];
    cout<<"Enter the elements : \n";
    
    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        cin>>ptr[iCnt];
    }

    Display(ptr,Size);
    
    delete []ptr;
    
    return 0;
}