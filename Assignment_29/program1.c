////////////////////////////////////////////////////////////////////////
//
// Name :          program1.c
// Discription :   Count number capital character from file
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
         Count number capital character from file
          Display count
  Stop    
*/

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<io.h>

int CountCapital(char FName[])
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
                if((Buffer[iCnt] >= 'A') && (Buffer[iCnt] <= 'Z'))
                {
                    iCount++;
                }
            }
            memset(Buffer,'\0',10);
        }
    }

    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter file name :\n");
    scanf("%s",Arr);

    iRet = CountCapital(Arr);

    printf("Number of capital character are : %d",iRet);

    return 0;
}