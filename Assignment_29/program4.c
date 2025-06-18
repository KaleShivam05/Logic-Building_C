//////////////////////////////////////////////////////////////////////////
//
// Name :          program4.c
// Discription :   get character & Count number of occurrences from file
// Input :         String
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          12/06/2025
//
//////////////////////////////////////////////////////////////////////////

/*
  Start
    Accept file name and one Character as input from user
        open that file in read mode than
         Count number white spaces from file
           Display count
  Stop    
*/

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<io.h>
#include<string.h>

int CountChar(char FName[], char ch)
{
    int fd = 0, iCnt = 0, iCount = 0, iRet = 0;

    char Buffer[10] = {'\0'};

    fd = open(FName,O_RDONLY);

    if(-1 == fd)
    {
        printf("Unaple to open file\n");
        return -1;
    }
    else
    {
        while(iRet = read(fd,Buffer,10))
        {
            for(iCnt = 0; iCnt < 10; iCnt++)
            {
                if((Buffer[iCnt] == ch) || (Buffer[iCnt] == ch + 32) || (Buffer[iCnt] == ch - 32))
                {
                    iCount++;
                }
            }
            memset(Buffer,'\0',10);
        }

        close(fd);
    }

    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';
    int iRet = 0;

    printf("Enter file name :\n");
    scanf("%s",Arr);

    printf("Enter Character :\n");
    scanf(" %c",&cValue);

    iRet = CountChar(Arr, cValue);

    printf("Frequency is : %d",iRet);

    return 0;
}
