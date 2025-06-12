/////////////////////////////////////////////////////////////////////
//
// Name :          program3.c
// Discription :   Display index of last occurrence of that number 
// Input :         Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          03/06/2025
//
//////////////////////////////////////////////////////////////////////

/*
   Start
        Accept elements & number from user
         Check numbers is present or not
           if number is present than
             Display that last occurrence index number
           if number is not present than
             Display -1 
    Stop         
*/

#include<stdio.h>

int Display(int Arr[], int iLength, int iNo)
{
    int iCnt = 0, iIndex = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)  // logic
        {
            iIndex = iCnt;
        }
    }

    if(iCnt >= iIndex)
    {
        return iIndex;
    }
    else
    {
        return -1;
    }

}

int main()
{
    int iSize = 0, iValue = 0, iCnt = 0, iRet = 0;;
    int *p = NULL;

    printf("Emter number of elements :\n");
    scanf("%d",&iSize);

    printf("Emter number that you want find :\n");
    scanf("%d",&iValue);

    p = (int*)malloc(iSize * sizeof(int)); //Dynamic memory allocation

    if(NULL == p)  //filter
    {
        printf("Unable to allocate memory ");
        return -1;
    }

    printf("Enter %d elements :\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++) //Input
    {
        printf("Enter element %d :",iCnt +1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Display(p, iSize, iValue); //function call

    if(iRet >= 0)
    {
        printf("Last occurrence of number is :%d",iRet);
    }
    else 
    {
        printf("There is no Such number");
    }

    free(p);

    return 0;
}