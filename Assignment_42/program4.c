//////////////////////////////////////////////////////////////////////////
//
// Name :          program4.c
// Discription :   Get input and Display factorial
// Input :         Integer  (5)
// Output :        Integer  (120)
// Author :        Shivam Rajendra Kale
// Date :          20/07/2025
//
//////////////////////////////////////////////////////////////////////////

/* 
  Start
      Accept input from user
          Display factorial
  Stop    
*/

#include<stdio.h>

int Fac(int iSize)
{
    static int count = 1;  
    static int iFactorial = 1;

    if(count <= iSize)
    {   
       iFactorial = iFactorial * count;
        count++;
    
        Fac(iSize);
    }
    else 
    {
        return iFactorial;
    }
}

int main()
{
    int iValue = 0, iRet;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = Fac(iValue);

    printf("factorial is :%d\n",iRet);
   
    return 0;
}