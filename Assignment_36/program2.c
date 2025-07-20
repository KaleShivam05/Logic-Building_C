////////////////////////////////////////////////////////////////////////
//
// Name :          program2.c
// Discription :   Display palindrome elements of list
// Input :         Integer
// Output :        Integer 
// Author :        Shivam Rajendra Kale
// Date :          19/06/2025
//
////////////////////////////////////////////////////////////////////////

/*
  Start
    Accept input as number from user
        Display palindrome elements of list  
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

void DisplayPalindrome(PNODE first)
{
    int iDigit = 0,data = 0, iReverse = 0;

    while(first != NULL)
    {
        data = first->data;

        while(data != 0)
        {
            iDigit = data % 10;
            iReverse = iReverse * 10 + iDigit;
            data = data / 10;
        }
       
        if(first->data == iReverse)
        {
            printf("%d\t",first->data);
        }

        iReverse = 0;
        data = 0;
       
        first = first->next;
    }
}

int main()
{
    PNODE head = NULL;
    int iResult = 0;

    Insertfirst(&head,11);
    Insertfirst(&head,30);
    Insertfirst(&head,141);
    Insertfirst(&head,17);
    Insertfirst(&head,10);
    Insertfirst(&head,25);

    DisplayPalindrome(head);

    return 0;
}