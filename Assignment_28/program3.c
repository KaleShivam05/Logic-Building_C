////////////////////////////////////////////////////////////////////////
//
// Name :          program3.c
// Discription :   read & display all data from file
// Input :         String
// Output :        String
// Author :        Shivam Rajendra Kale
// Date :          11/06/2025
//
///////////////////////////////////////////////////////////////////////

/*
  Start
    Accept file name as input from user
        open that file in read mode than
          read and display all data from that file
  Stop    
*/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

void OpenFile(char Arr[])
{
    int fd = 0, iRet = 0;
    char Buffer[1024] = {'\0'};

    fd = open(Arr,O_RDONLY); 

    if(-1 == fd) //filter
    {
        printf("Unable to create file\n");
        return ;
    }
    else
    {
        printf("File create successfully \n");

        while(iRet = read(fd,Buffer,1024)) //logic
        {  
            printf("%d bytes gets read successfully \n",iRet);
            printf("%s\n",Buffer);
        }    
    }
}

int main()
{
    char Fname[50] = {'\0'};

    printf("Enter file name that you want to read \n");
    scanf("%s",Fname);

    OpenFile(Fname); //function call

    return 0;
}