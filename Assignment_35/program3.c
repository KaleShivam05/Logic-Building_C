////////////////////////////////////////////////////////////////////////
//
// Name :          program3.c
// Discription :   Display addition of all even numbers 
// Input :         Integer
// Output :        Integer 
// Author :        Shivam Rajendra Kale
// Date :          18/06/2025
//
////////////////////////////////////////////////////////////////////////

/*
  Start
    Accept input as number from user
        Display addition of all even numbers 
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

int AdditionEvenNumber(PNODE first)
{
    int iSum = 0;

    while(first != NULL)
    {
        if((first->data % 2) == 0)
        {
            iSum = iSum + first->data;
        }
       
        first = first->next;
    }
    return iSum;
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

    iResult = AdditionEvenNumber(head);

    printf("Adition of Even elements are :%d\n",iResult);

}