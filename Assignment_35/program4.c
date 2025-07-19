//////////////////////////////////////////////////////////////////////////
//
// Name :          program4.c
// Discription :   Check second maximum element form singly LinkedList
// Input :         Integer
// Output :        Integer 
// Author :        Shivam Rajendra Kale
// Date :          18/06/2025
//
//////////////////////////////////////////////////////////////////////////

/*
  Start
    Accept input as number from user
        Check second maximum element form singly LinkedList
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

int SecondMaximum(PNODE first)
{
    int max1 = 0;
    int max2 = 0;

    while (first != NULL)
     {
        if (first->data > max1)
        {
            max2 = max1;
            max1 = first->data;
        }
        else if (first->data > max2 && first->data != max1) 
        {
            max2 = first->data;
        }

        first = first->next;
    }

    return max2;
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

    iResult = SecondMaximum(head);

    printf("Second Maximum element from list is :%d\n",iResult);

}