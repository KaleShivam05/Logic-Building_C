/////////////////////////////////////////////////////////////////
//
//  File name :     program125.cpp
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
            Allocate Dynamic memory than 
            Accept elements and 
            Display all elements
    Stop
*/

#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int iLength = 5)
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

        void Accept()
        {
            cout<<"Enter the elements : \n";
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            cout<<"Elements of the array are : \n";
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\n";
            }
        }
};

int main()
{
    ArrayX aobj(5);

    aobj.iSize = 15;
    aobj.Arr = NULL;

    aobj.Accept();
    aobj.Display();
    
    return 0;
}