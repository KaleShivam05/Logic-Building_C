////////////////////////////////////////////////////////////////////////
//
// Name :          program1.c
// Discription :   Display perfect number from list
// Input :         Integer
// Output :        Integer 
// Author :        Shivam Rajendra Kale
// Date :          18/06/2025
//
////////////////////////////////////////////////////////////////////////

/*
  Start
    Accept input as number from user
        Display perfect number from list  
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

void DisplayPerfect(PNODE first)
{
    int iCnt = 0, iSummation = 0;

    while(first != NULL)
    {
        for(iCnt = 1; iCnt < first->data; iCnt++)
        {
            if((first->data % iCnt) == 0)
            {
                iSummation = iSummation + iCnt;
            }
        }

        if(iSummation == first->data)
        {
            printf("%d\t",first->data);
        }  

        iSummation = 0;

        first = first->next;
    }
}

int main()
{
    PNODE head = NULL;
    int iResult = 0;

    Insertfirst(&head,5);
    Insertfirst(&head,6);
    Insertfirst(&head,28);
    Insertfirst(&head,11);
    Insertfirst(&head,3);

    DisplayPerfect(head);

}