////////////////////////////////////////////////////////////////////////
//
// Name :          program3.c
// Discription :   Display product of digit of all elements from list
// Input :         Integer
// Output :        Integer 
// Author :        Shivam Rajendra Kale
// Date :          19/06/2025
//
////////////////////////////////////////////////////////////////////////

/*
  Start
    Accept input as number from user
        Display produc of digit of all elements from list
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

void DisplayProduct(PNODE first)
{
    int iDigit = 0, iSum = 1;

    while(first != NULL)
    {
        while(first->data != 0)
        {
            iDigit = first->data % 10;
            iSum = iSum * iDigit;
            first->data = first->data / 10;
        }

        printf("%d\t",iSum);

        iSum = 1;
       
        first = first->next;
    }
  
}

int main()
{
    PNODE head = NULL;
    int iResult = 0;

    Insertfirst(&head,51);
    Insertfirst(&head,37);
    Insertfirst(&head,49);
    Insertfirst(&head,30);
    Insertfirst(&head,15);
    Insertfirst(&head,25);

    DisplayProduct(head);

    return 0;
}