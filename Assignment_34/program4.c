////////////////////////////////////////////////////////////////////////
//
// Name :          program4.c
// Discription :   find maximum from linkedlist
// Input :         Integer
// Output :        Integer 
// Author :        Shivam Rajendra Kale
// Date :          17/06/2025
//
////////////////////////////////////////////////////////////////////////

/*
  Start
    Accept input as number from user
        Display maximum element from linkedlist
  Stop    
*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void Insertfirst(PPNODE first, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(NULL == *first)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        *first = newn;
    }
}

int Maximum(PNODE first)
{
    int iMax = 0;

    iMax = first->data;

    while(first != NULL)
    {
       if(iMax < first->data)
       {
            iMax = first->data;
       }
       first = first->next;
    }
    return iMax;
}

int main()
{
    PNODE head = NULL;
    int iResult = 0;

    Insertfirst(&head,51);
    Insertfirst(&head,30);
    Insertfirst(&head,40);
    Insertfirst(&head,30);
    Insertfirst(&head,10);
    Insertfirst(&head,25);

    iResult = Maximum(head);

    printf("Maximum element from list is :%d\n",iResult);

}