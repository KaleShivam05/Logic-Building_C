////////////////////////////////////////////////////////////////////////
//
// Name :          program3.c
// Discription :   Display Summation of all number from array
// Output :        Integer 
// Author :        Shivam Rajendra Kale
// Date :          21/06/2025
//
////////////////////////////////////////////////////////////////////////

/* 
  Start
    Accept input as number from user
        Display summation of all elements from Array 
  Stop    
*/

#include<iostream>
using namespace std;

template <class T>
T AdditionN(T *Arr, int iSize)
{
    T Add = 0;
    int i = 0;

    if(NULL == Arr)
    {
        cout<<"Unable to procced\n";
        return NULL;
    }

    for(i = 0; i < iSize; i++)
    {
        Add = Add + Arr[i];
    }
    return Add;
}

int main()
{
    int iValue = 5;
    int iRet = 0;

    int Array[] = {10,20,30,40,50};

    iRet = AdditionN(Array, iValue);

    cout<<"Summation of all elements are :"<<iRet<<"\n";

  /////////////////////////////////////////////////////////////////

    int fValue = 5;
    float fRet = 0;

    float fArray[] = {10.0f, 20.45f, 30.0, 40.04f, 50.55f};

    fRet = AdditionN(fArray, fValue);

    cout<<"Summation of all elements are :"<<fRet<<"\n";

    return 0;
}