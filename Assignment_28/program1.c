////////////////////////////////////////////////////////////////////////
//
// Name :          program1.c
// Discription :   Open file in read mode
// Input :         String
// Output :        String
// Author :        Shivam Rajendra Kale
// Date :          11/06/2025
//
///////////////////////////////////////////////////////////////////////

/*
  Start
    Accept file name as input from user
        open that file in read mode
  Stop    
*/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

void OpenFile(char Arr[])
{
    int fd = 0;

    fd = open(Arr,O_RDONLY); //logic

    if(-1 == fd) //filter
    {
        printf("Unable to open file\n");
        return ;
    }
    else
    {
        printf("File opened successfully \n");
    }

}

int main()
{
    char Fname[50] = {'\0'};

    printf("Enter file name that you want to open \n");
    scanf("%s",Fname);

    OpenFile(Fname); //function call

    return 0;
}