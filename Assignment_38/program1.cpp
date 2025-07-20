//////////////////////////////////////////////////////////////////////////
//
// Name :          program1.c
// Discription :   Generic code use to multiplication of two numbers
// Output :        Integer 
// Author :        Shivam Rajendra Kale
// Date :          21/06/2025
//
//////////////////////////////////////////////////////////////////////////

/* 
  Start
    Accept input as number from user
        write a specific code than
            convert specific code in to generic code
  Stop    
*/

#include<iostream>
using namespace std;

template <class T>
T Multiply(T no1, T no2)
{
    T ans;
    ans = no1 * no2;
    return ans;
}

int main()
{
    int iRet = Multiply(10, 20);

    cout<<"Multiplication is :"<<iRet<<"\n";

    float fRet = Multiply(10.0f, 20.0f);
    cout<<"Multiplication is :"<<fRet<<"\n";

    return 0;
}