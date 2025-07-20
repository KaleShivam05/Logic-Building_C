////////////////////////////////////////////////////////////////////////
//
// Name :          program2.c
// Discription :   Generic code use to find largest numbers
// Output :        Integer 
// Author :        Shivam Rajendra Kale
// Date :          21/06/2025
//
////////////////////////////////////////////////////////////////////////

/* 
  Start
    Accept input as number from user
        Operation on Array
  Stop    
*/

#include<iostream>
using namespace std;

template <class T>
T Maximum(T no1, T no2, T no3)
{
    T max;

    if(no1 > no2 && no1 > no3)
    {
       max = no1;
    }
    else if(no2 > no1 && no2 > no3)
    {
       max = no2;
    }
    else
    {
       max = no3;
    }

    return max;
}

int main()
{
    int iRet = Maximum(10, 20, 15);

    cout<<"Largest number is :"<<iRet<<"\n";

    float fRet = Maximum(10.0f, 12.0f, 20.0f);
    cout<<"Largest number is :"<<fRet<<"\n";

    return 0;
}