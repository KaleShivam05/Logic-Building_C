////////////////////////////////////////////////////////////////////////
//
// Name :          program2.c
// Discription :   Display all number which are prime
// Input :         Integer
// Output :        Integer 
// Author :        Shivam Rajendra Kale
// Date :          18/06/2025
//
////////////////////////////////////////////////////////////////////////

/*
  Start
    Accept input as number from user
        Display all number which are prime  
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

int DisplayPrime(PNODE first)
{
    int iCnt = 0;

    while(first != NULL)
    {
        for(iCnt = 2; iCnt < first->data; iCnt++)
        {
            if((first->data % iCnt) == 0)
            {
                break;
            }
            else if((first->data - 1) == iCnt)
            {
                printf("%d\t",first->data);
            }
        }
        first = first->next;
    }
}

int main()
{
    PNODE head = NULL;
    int iResult = 0;

    Insertfirst(&head,11);
    Insertfirst(&head,30);
    Insertfirst(&head,40);
    Insertfirst(&head,17);
    Insertfirst(&head,10);
    Insertfirst(&head,25);

    DisplayPrime(head);

}