//////////////////////////////////////////////////////////////////////////
//
// Name :          program5.c
// Discription :   Get input and Display Revers the  number
// Input :         Integer (543) 
// Output :        Charecter (345)
// Author :        Shivam Rajendra Kale
// Date :          22/07/2025
//
//////////////////////////////////////////////////////////////////////////

/* 
  Start
      Accept input from user
          Display Revers the  number
  Stop    
*/

#include<stdio.h>

int Reverse(int Size)
{
    int iDigit = 0;
    static int iSize = -1, iReverse = 0;
    
    if(iSize == -1)
    {
        iSize = Size;
    }

    if(iSize > 0)
    {   
        iDigit = iSize % 10;
        iReverse =  iReverse * 10 + iDigit;
        iSize = iSize / 10;
        
        Reverse(iSize);
    }
    else 
    {
        return iReverse;
    }
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = Reverse(iValue);

    printf("%d\n",iRet);

    return 0;
}