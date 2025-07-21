////////////////////////////////////////////////////////////////////////
//
// Name :          program2.c
// Discription :   Generic code use to count frequency of any numbers
// Output :        Integer 
// Author :        Shivam Rajendra Kale
// Date :          22/06/2025
//
////////////////////////////////////////////////////////////////////////

/* 
  Start
    Accept input as number from user
        Generic code use to count frequency of any numbers
  Stop    
*/

#include<iostream>
using namespace std;

template <class T>
T Frequency(T *Arr, int iSize, T no1)
{
    int iCount = 0, i = 0;

    for(i = 0; i < iSize; i++)
    {
         if(Arr[i] == no1)
         {
            iCount++;
         }
    }

    return iCount;
}

int main()
{
      int Array[] = {10,20,10,30,40};

      int iRet = Frequency(Array, 5, 10);

      cout<<"Frequency is :"<<iRet<<" times\n";

 ///////////////////////////////////////////////////////

      float fArray[] = {30.45, 34, 20.20, 45.4, 20.20};

      float fRet = Frequency(fArray, 5, 20.20f);
      
      cout<<"Frequency is :"<<iRet<<" times\n";

      return 0;
}