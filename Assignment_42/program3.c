//////////////////////////////////////////////////////////////////////////
//
// Name :          program3.c
// Discription :   Get input and Display number of Char. into string
// Input :         String 
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          20/07/2025
//
//////////////////////////////////////////////////////////////////////////

/* 
  Start
      Accept input from user
          Display number of Char. into string
  Stop    
*/

#include<stdio.h>

 int Strlen(char *str)
 {
    static int count = 0;

    if(*str != '\0')
    {
        count++;
        str++;

        Strlen(str);
    }
    else 
    {
        return count;
    }  
 }

int main()
{
    int iRet = 0;
    char arr[20] = {'\0'};

    printf("Enter String :");
    scanf("%s",arr);

    iRet = Strlen(arr);

    printf("Number of characters are :%d\n",iRet);

    return 0;
}