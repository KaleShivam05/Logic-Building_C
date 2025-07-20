////////////////////////////////////////////////////////////////////////
//
// Name :          program1.c
// Discription :   Operation on Array
// Input :         Integer
// Output :        Integer 
// Author :        Shivam Rajendra Kale
// Date :          20/06/2025
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

class Array
{
    protected :
        int *Arr;
        int size;

    public :
        Array(int value = 10)
        {
            cout<<"Inside Constructor\n";
            this->size = value;
            this->Arr = new int[size];
        }    

        Array(Array &ref)
        {
            cout<<"Inside copy Constructor\n";

            this->size = ref.size;
            this->Arr = new int[this->size];

            for(int i = 0; i < size; i++)
            {
                this->Arr[i] = ref.Arr[i];
            }
        }

        ~Array()
        {
            cout<<"Inside Destructor\n";
            delete []Arr;
        }

        void Accept();
        void Display();
};

void Array :: Accept()
{
    cout<<"Please enter the values :\n";

    for(int i = 0; i < this->size; i++)
    {
        cin>>Arr[i];
    }
}

void Array :: Display()
{
    cout<<"Elements are : \n";

    for(int i = 0; i < this->size; i++)
    {
        cout<<Arr[i]<<"\t";
    }
    cout<<"\n";
}

class ArrSearch : public Array
{
    public :
        ArrSearch(int no = 10) : Array(no){}

        int SearchFirst(int);
        int Frequency(int);
        int SearchLast(int);
        int EvenCount();
        int OddCount();
        int SumAll();
};

int ArrSearch :: SearchFirst(int value)
{
    int i = 0;

    for(i = 0; i < size; i++)
    {
        if(Arr[i] == value)
        {
            break;
        }
    }

    if(i == size)
    {
        return -1;
    }
    else 
    {
        return i + 1;
    }
}

int ArrSearch :: Frequency(int value)
{
    int iCnt = 0;

    for(int i = 0; i < size; i++)
    {
        if(Arr[i] == value)
        {
            iCnt++;
        }
    }
    return iCnt+1;
}

int ArrSearch :: SearchLast(int value)
{
    int iCnt = 0;

    for(iCnt = size; iCnt >= 1; iCnt--)
    {
        if(Arr[iCnt] == value)
        {
            break;
        }
    }

    if(iCnt == 0)
    {
        return -1;
    }
    else 
    {
        return iCnt + 1;
    } 
}

int ArrSearch :: EvenCount()
{
    int iCnt = 0;

    for(int i = 0; i < size; i++)
    {
        if((Arr[i] % 2) == 0)
        {
            iCnt++;
        }
    }

    return iCnt;
}

int ArrSearch :: OddCount()
{
    int iCnt = 0;

    for(int i = 0; i < size; i++)
    {
        if((Arr[i] % 2) != 0)
        {
            iCnt++;
        }
    }

    return iCnt;
}

int ArrSearch :: SumAll()
{
    int iCnt = 0;

    for(int i = 0; i < size; i++)
    {
        iCnt = iCnt + Arr[i];   
    }

    return iCnt;
}


int main()
{
    cout<<"Inside main\n";

    ArrSearch sobj1(5);
    sobj1.Accept();
    sobj1.Display();

    int iRet = sobj1.Frequency(11);
    cout<<"Frequency is "<<iRet<<"\n";

    iRet = sobj1.SearchFirst(11);
    cout<<"First occurance is :"<<iRet<<"\n";

    iRet = sobj1.SearchLast(11);
    cout<<"Last occurance is :"<<iRet<<"\n";

    iRet = sobj1.EvenCount();
    cout<<"Even numbers are :"<<iRet<<"\n";

    iRet = sobj1.OddCount();
    cout<<"odd numbers are :"<<iRet<<"\n";

    iRet = sobj1.SumAll();
    cout<<"summation of all numbers is :"<<iRet<<"\n";

    return 0;
}