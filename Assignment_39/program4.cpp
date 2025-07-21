////////////////////////////////////////////////////////////////////////
//
// Name :          program4.c
// Discription :   Display Last occurence of any number
// Output :        Integer 
// Author :        Shivam Rajendra Kale
// Date :          22/06/2025
//
////////////////////////////////////////////////////////////////////////

/* 
  Start
    Accept input as number from user
        Display Last occurence of any number
  Stop    
*/

#include<iostream>
using namespace std;

template <class T>
T SearchLast(T *Arr, int iSize, T iNo)
{
    int i = 0;

    if(NULL == Arr)
    {
        cout<<"Unable to procced\n";
        return NULL;
    }

    for(i = iSize-1; i >= 0; i--)
    {
        if(iNo == Arr[i])
        {
            break;
        }
    }
    
    if(i == -1)
    {
        return -1;
    }
    else 
    {
        return i+1;
    }
}

int main()
{
    int iRet = 0;

    int Array[] = {10,20,30,40,50};

    iRet = SearchLast(Array, 5, 30);

    cout<<"Last occurrence is :"<<iRet<<"\n";

  /////////////////////////////////////////////////////////////////

    float fRet = 0;

    float fArray[] = {10.0f, 20.45f, 30.0, 40.04f, 50.55f};

    fRet = SearchLast(fArray, 5, 10.0f);

    cout<<"Last occurrence is :"<<fRet<<"\n";

    return 0;
}