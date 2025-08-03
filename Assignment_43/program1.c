//////////////////////////////////////////////////////////////////////////
//
// Name :          program1.c
// Discription :   use to Display number of white spaces form string
// Input :         String
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          22/07/2025
//
//////////////////////////////////////////////////////////////////////////

/* 
  Start
      Accept input from user
          Display number of white spaces form string
  Stop    
*/

#include<stdio.h>

 int Strlen(char *str)
 {
    static int count = 0;

    if(*str != '\0')
    {
        if(*str == ' ')
        {
            count++;
        }
        
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
    scanf("%[^\n]s",arr);

    iRet = Strlen(arr);

    printf("Number of small characters are :%d\n",iRet);

    return 0;
}