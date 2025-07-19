////////////////////////////////////////////////////////////////////////
//
// Name :          program1.c
// Discription :   find first occurrence of number in Linkedlist
// Input :         Integer
// Output :        Integer 
// Author :        Shivam Rajendra Kale
// Date :          17/06/2025
//
////////////////////////////////////////////////////////////////////////

/*
  Start
    Accept input as number from user
      Display posotion of that number in linkedlist
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

int SearchFirstOcc(PNODE first, int no)
{
    int iCount = 0;

    while(first != NULL)
    {
        iCount++;
        if(no == first->data)
        {
            break;
        }
        first = first->next;
    }
    return iCount;
}

int main()
{
    PNODE head = NULL;
    int iResult = 0;

    Insertfirst(&head,51);
    Insertfirst(&head,40);
    Insertfirst(&head,30);
    Insertfirst(&head,10);
    Insertfirst(&head,25);

    iResult = SearchFirstOcc(head,30);

    printf("first occurrence of 30 is at :%d\n",iResult);

}