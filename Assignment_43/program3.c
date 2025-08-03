//////////////////////////////////////////////////////////////////////////
//
// Name :          program3.c
// Discription :   use to Display number of small char form string
// Input :         String 
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          22/07/2025
//
//////////////////////////////////////////////////////////////////////////

/* 
  Start
      Accept input from user
          Display number of small char form string
  Stop    
*/

#include<stdio.h>

 int Small(char *str)
 {
    static int count = 0;

    if(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            count++;
        }
        
        str++;

        Small(str);
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

    iRet = Small(arr);

    printf("Number of characters are :%d\n",iRet);

    return 0;
}