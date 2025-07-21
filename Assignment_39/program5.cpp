////////////////////////////////////////////////////////////////////////
//
// Name :          program5.c
// Discription :   Display Array in Reverse contents
// Output :        Integer 
// Author :        Shivam Rajendra Kale
// Date :          22/06/2025
//
////////////////////////////////////////////////////////////////////////

/* 
  Start
    Accept input as number from user
        Display Array in Reverse contents
  Stop    
*/

#include<iostream>
using namespace std;

template <class T>
T Reverse(T *Arr, int iSize)
{
    int start = 0;
    T temp = 0;
    int end = iSize - 1;

    while (start < end)
    {
        
        temp = Arr[start];
        Arr[start] = Arr[end];
        Arr[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    int i = 0;

    int Array[] = {30,40,10,60,50};

    Reverse(Array, 5);

    for(i = 0; i < 5; i++)
    {
        cout<<Array[i]<<"\t";
    }
    cout<<"\n";

  /////////////////////////////////////////////////////////////////

    float fArray[] = {30.0f, 50.45f, 60.45, 20.04f, 40.55f};

    Reverse(fArray, 5);

    for(i = 0; i < 5; i++)
    {
        cout<<fArray[i]<<"\t";
    }

    return 0;
}