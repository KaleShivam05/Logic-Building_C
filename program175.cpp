/////////////////////////////////////////////////////////////////
//
//  File name :     program175.cpp
//  Descreption :   Create a Linked list
//  Author :        Shivam Rajendra Kale
//  Date :          26/07/2025
//
//////////////////////////////////////////////////////////////////

// Singly circular Linked List

// | 11 |->| 21 |->| 51 |->| 101 |-> 


#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;

class DoublyCLL
{
    private:
        PNODE first;
        PNODE last;
        int iCount;

    public:
        DoublyCLL();

        void Display();
        int Count();

        void InsertFirst(int);
        void InsertLast(int);
        void InsertAtPos(int,int);
        
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);
};

DoublyCLL :: DoublyCLL()
{

}

int main()
{
    DoublyCLL dobj;

    return 0;
}