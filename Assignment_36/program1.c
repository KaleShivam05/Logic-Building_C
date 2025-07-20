////////////////////////////////////////////////////////////////////////
//
// Name :          program1.c
// Discription :   reverse each element of singly linked list
// Input :         Integer
// Output :        Integer 
// Author :        Shivam Rajendra Kale
// Date :          19/06/2025
//
////////////////////////////////////////////////////////////////////////

/* 
  Start
    Accept input as number from user
        reverse each element of singly linked list  
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

void DisplayReverse(PNODE first)
{
    int iDigit = 0, iReverse = 0;

    while(first != NULL)
    {
        while(first->data != 0)
        {
            iDigit = first->data % 10;
            iReverse = iReverse * 10 + iDigit;
            first->data = first->data / 10;
        }

        first->data = iReverse;
        iReverse = 0;

        printf("%d\t",first->data);
        
        first = first->next;
    }
}

int main()
{
    PNODE head = NULL;
    int iResult = 0;

    Insertfirst(&head,5);
    Insertfirst(&head,32);
    Insertfirst(&head,28);
    Insertfirst(&head,34);
    Insertfirst(&head,3);

    DisplayReverse(head);

    return 0;

}