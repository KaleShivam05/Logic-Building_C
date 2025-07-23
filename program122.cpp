/////////////////////////////////////////////////////////////////
//
//  File name :     program122.cpp
//  Descreption :   Allocate Dynamic memory
//  Input :         Integer
//  Output :        Integer
//  Author :        Shivam Rajendra Kale
//  Date :          22/07/2025
//
//////////////////////////////////////////////////////////////////

/*  
    Start
        Accept input from user
            Allocate Dynamic memory
    Stop
*/

#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int iLength)
        {
            cout<<"Inside constructor\n";
            iSize = iLength;
            Arr = new int[iSize];
        }

        ~ArrayX()
        {
            cout<<"Inside destructor\n";
            delete []Arr;
        }
};

int main()
{
    ArrayX aobj(5);

    return 0;
}