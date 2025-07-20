////////////////////////////////////////////////////////////////////////
//
// Name :          program5.c
// Discription :   Display smallest number from array
// Output :        Integer 
// Author :        Shivam Rajendra Kale
// Date :          21/06/2025
//
////////////////////////////////////////////////////////////////////////

/* 
  Start
    Accept input as number from user
        Display smallest number from array
  Stop    
*/

#include<iostream>
using namespace std;

template <class T>
T AdditionN(T *Arr, int iSize)
{
    T Max = 0;
    int i = 0;

    if(NULL == Arr)
    {
        cout<<"Unable to procced\n";
        return NULL;
    }

    Max = Arr[0];

    for(i = 0; i < iSize; i++)
    {
        if(Max > Arr[i])
        {
            Max = Arr[i];
        }
    }
    return Max;
}

int main()
{
    int iValue = 5;
    int iRet = 0;

    int Array[] = {30,40,10,60,50};

    iRet = AdditionN(Array, iValue);

    cout<<"Smallest elements is :"<<iRet<<"\n";

  /////////////////////////////////////////////////////////////////

    int fValue = 5;
    float fRet = 0;

    float fArray[] = {30.0f, 50.45f, 60.45, 20.04f, 40.55f};

    fRet = AdditionN(fArray, fValue);

    cout<<"Smallest elements is :"<<fRet<<"\n";

    return 0;
}