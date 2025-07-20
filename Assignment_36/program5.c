//////////////////////////////////////////////////////////////////////////
//
// Name :          program5.c
// Discription :   Display large digit form singly LinkedList
// Input :         Integer
// Output :        Integer 
// Author :        Shivam Rajendra Kale
// Date :          19/06/2025
//
//////////////////////////////////////////////////////////////////////////

/*
  Start
    Accept input as number from user
        Display large digit form singly LinkedList
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

void DisplaySmall(PNODE first)
{
    int minimum = 0, iDigit = 0;

    while (first != NULL)
    {  
        while(first->data != 0)
        {
            iDigit = first->data % 10;
            first->data = first->data / 10;

            if(minimum < iDigit)
            {
                minimum = iDigit;
            }
        }

        printf("%d\t",minimum);

        minimum = 0;

        first = first->next;
    }

}

int main()
{
    PNODE head = NULL;
    int iResult = 0;

    Insertfirst(&head,51);
    Insertfirst(&head,94);
    Insertfirst(&head,87);
    Insertfirst(&head,67);
    Insertfirst(&head,764356);
    Insertfirst(&head,25);

    DisplaySmall(head);

    return 0;
}