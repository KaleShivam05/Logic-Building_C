////////////////////////////////////////////////////////////////////////
//
// Name :          program4.c
// Discription :   Display size of file
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
          read and display size of that file
  Stop    
*/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

void OpenFile(char Arr[])
{
    int fd = 0, iRet = 0, iByte = 0;
    char Buffer[1024] = {'\0'};

    fd = open(Arr,O_RDONLY); 

    if(-1 == fd) //filter
    {
        printf("Unable to create file\n");
        return ;
    }
    else
    {
        while(iRet = read(fd,Buffer,1024))
        {  
            iByte = iByte + iRet; //logic
        }    

        printf("Size of file is %d bytes\n",iByte);
    }
}

int main()
{
    char Fname[50] = {'\0'};

    printf("Enter file name \n");
    scanf("%s",Fname);

    OpenFile(Fname); //function call

    return 0;
}