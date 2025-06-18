//////////////////////////////////////////////////////////////////////////
//
// Name :          program5.c
// Discription :   get number & read data from file upto that file
// Input :         String , Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          12/06/2025
//
//////////////////////////////////////////////////////////////////////////

/*
  Start
    Accept file name and one Character as input from user
        open that file in read mode than
           Display data from file upto that file
  Stop    
*/

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<io.h>
#include<string.h>

void CountChar(char FName[], int iNo)
{
    int fd = 0, iCnt = 0, iRet = 0;

    char Buffer[1024] = {'\0'};

    fd = open(FName,O_RDONLY);

    if(-1 == fd)
    {
        printf("Unaple to open file\n");
        return ;
    }
    else
    {
        iRet = read(fd,Buffer,iNo);
        if(iRet == -1)
        {
            printf("Unable to read file\n");
            close(fd);
            return;
        }
        
        write(1, Buffer, iRet); 

        close(fd);
    }

}

int main()
{
    char Arr[50] = {'\0'};
    int iValue = 0;
    int iRet = 0;

    printf("Enter file name :\n");
    scanf("%s",Arr);

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    CountChar(Arr, iValue);

    return 0;
}
