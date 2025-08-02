//////////////////////////////////////////////////////////////////////////
//
// Name :          program5.c
// Discription :   Get input and Display product of all digits
// Input :         Integer (4) 
// Output :        Charecter (a b c d)
// Author :        Shivam Rajendra Kale
// Date :          20/07/2025
//
//////////////////////////////////////////////////////////////////////////

/* 
  Start
      Accept input from user
          Display  product of All digits
  Stop    
*/

#include<stdio.h>

int MultDigit(int Size)
{
    int iDigit = 0;
    static int iSize = -1, iSum = 1;
    
    if(iSize == -1)
    {
        iSize = Size;
    }

    if(iSize > 0)
    {   
        iDigit = iSize % 10;
        iSum = iSum * iDigit;
        iSize = iSize / 10;
        
        MultDigit(iSize);
    }
    else 
    {
        return iSum;
    }
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = MultDigit(iValue);

    printf("Product of all digits are :%d\n",iRet);

    return 0;
}