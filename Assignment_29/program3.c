////////////////////////////////////////////////////////////////////////
//
// Name :          program3.c
// Discription :   Count number white spaces from file
// Input :         String
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          12/06/2025
//
///////////////////////////////////////////////////////////////////////

/*
  Start
    Accept file name as input from user
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

int CountWhita(char FName[])
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
                if(Buffer[iCnt] == ' ')
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
    int iRet = 0;

    printf("Enter file name :\n");
    scanf("%s",Arr);

    iRet = CountWhita(Arr);

    printf("Number of white spaces character are : %d",iRet);

    return 0;
}
