/////////////////////////////////////////////////////////////////
//
//  File name :     program139.cpp
//  Descreption :   Create a Linked list
//  Author :        Shivam Rajendra Kale
//  Date :          23/07/2025
//
//////////////////////////////////////////////////////////////////

// Singly Linear Linked List

// | 11 |->| 21 |->| 51 |->| 101 |->NULL


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

void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)      // LL is empty
    {
        *first = newn;
    }
    else                    // LL contains atleast 1 node
    {
        newn->next = *first;
        *first = newn;
    }
}

void InsertLast(PPNODE first, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)      // LL is empty
    {
        *first = newn;
    }
    else                    // LL contains atleast 1 node
    {

    }
}

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d | -> ",first->data);
        first = first -> next;
    }
    printf("NULL\n");
}

int main()
{
    PNODE head = NULL;

    InsertFirst(&head,121);
    InsertFirst(&head,111);
    InsertFirst(&head,101);
    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);
    
    Display(head);
    
    return 0;
}