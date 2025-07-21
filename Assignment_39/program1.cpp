//////////////////////////////////////////////////////////////////////////
//
// Name :          program1.c
// Discription :   Get input and Display 
// Output :        Integer 
// Author :        Shivam Rajendra Kale
// Date :          22/06/2025
//
//////////////////////////////////////////////////////////////////////////

/* 
  Start
    Accept input from user
      Display input in generic     
  Stop    
*/

#include<iostream>
using namespace std;

template <class T>
T Display(T Value, int iSize)
{
    int i = 0;

    for(i = 1; i <= iSize; i++)
    {
        cout<<Value<<"\t";
    }
    cout<<"\n";
}

int main()
{
    Display('M', 7);

    Display(10.45f, 5);
    
    return 0;
}