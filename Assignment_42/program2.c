//////////////////////////////////////////////////////////////////////////
//
// Name :          program2.c
// Discription :   Get input and Display
// Input :         Integer (423) 
// Output :        Integer (9)
// Author :        Shivam Rajendra Kale
// Date :          20/07/2025
//
//////////////////////////////////////////////////////////////////////////

/* 
  Start
      Accept input from user
        calculate Summation of all digits than
          return the Summation
  Stop    
*/

#include<stdio.h>

int Sum(int Size)
{
    int iDigit = 0;
    static int iSize = -1, iSum = 0;
    
    if(iSize == -1)
    {
        iSize = Size;
    }

    if(iSize > 0)
    {   
        iDigit = iSize % 10;
        iSum = iSum + iDigit;
        iSize = iSize / 10;
        
        Sum(iSize);
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

    iRet = Sum(iValue);

    printf("Summation of all digits : %d\n",iRet);

    return 0;
}