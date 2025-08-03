//////////////////////////////////////////////////////////////////////////
//
// Name :          program4.c
// Discription :   use to Display small digit from number
// Input :         Integer (423) 
// Output :        Integer (4)
// Author :        Shivam Rajendra Kale
// Date :          22/07/2025
//
//////////////////////////////////////////////////////////////////////////

/* 
  Start
      Accept input from user
        Display small digit from number
  Stop    
*/

#include<stdio.h>

int Sum(int Size)
{
    int iDigit = 0;
    static int iSize = -1, iMax = 9;
    
    if(iSize == -1)
    {
        iSize = Size;
    }

    if(iSize > 0)
    {   
        iDigit = iSize % 10;
        iSize = iSize / 10;

        if(iMax > iDigit)
        {
            iMax = iDigit;
        }
        
        Sum(iSize);
    }
    else 
    {
        return iMax;
    }

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = Sum(iValue);

    printf("Small digit is : %d\n",iRet);

    return 0;
}