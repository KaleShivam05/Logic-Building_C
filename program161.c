/////////////////////////////////////////////////////////////////
//
//  File name :     program161.cpp
//  Descreption :   Create a Linked list
//  Author :        Shivam Rajendra Kale
//  Date :          25/07/2025
//
//////////////////////////////////////////////////////////////////

// Singly Circular Linked List

// | 11 |->| 21 |->| 51 |->| 101 |->


#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE first, PPNODE last, int no)
{}

void InsertLast(PPNODE first, PPNODE last, int no)
{}

void InsertAtPos(PPNODE first, PPNODE last, int no, int pos)
{}

void DeleteFirst(PPNODE first, PPNODE last)
{}

void DeleteLast(PPNODE first, PPNODE last)
{}

void DeleteAtPos(PPNODE first, PPNODE last, int pos)
{}

void Display(PNODE first, PNODE last)
{}

int Count(PNODE first, PNODE last)
{
    return 0;
}

int main()
{
    PNODE head = NULL;
    PNODE tail = NULL;

    return 0;
}