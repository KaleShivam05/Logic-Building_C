/////////////////////////////////////////////////////////////////
//
//  File name :     program162.cpp
//  Descreption :   Create a Linked list
//  Author :        Shivam Rajendra Kale
//  Date :          25/07/2025
//
//////////////////////////////////////////////////////////////////

// Singly Linear Linked List

// | 11 |->| 21 |->| 51 |->| 101 |->


#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyCLL
{
    private:
        PNODE first;
        PNODE last;
        int iCount;

    public:
        SinglyCLL()
        {}

        void InsertFirst(int no)
        {}

        void InsertLast(int no)
        {}

        void InsertAtPos(int no, int pos)
        {}

        void DeleteFirst()
        {}

        void DeleteLast()
        {}
        
        void DeleteAtPos(int pos)
        {}

        void Display()
        {}

        int Count()
        {
            return iCount;
        }
};

int main()
{
    SinglyCLL sobj;
    

    return 0;
}