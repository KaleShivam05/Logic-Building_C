////////////////////////////////////////////////////////////////////////
//
// Name :          program5.c
// Discription :   Display the addition of digit 
// Input :         Integer
// Output :        Integer 
// Author :        Shivam Rajendra Kale
// Date :          18/06/2025
//
////////////////////////////////////////////////////////////////////////

/*
  Start
    Accept input as number from user
        Display the addition of digit form singly LinkedList
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

void SumDigit(PNODE first)
{
    int iDigit = 0, iSum = 0;

    while(first != NULL)
    {
        while(first->data != 0)
        {
             iDigit = first->data % 10;
             iSum = iSum + iDigit;
             first->data = first->data / 10;
        }
       
        printf("%d\t",iSum);

        iSum = 0;

        first = first->next;
    }
    
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

    SumDigit(head);

    return 0;
}