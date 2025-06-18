////////////////////////////////////////////////////////////////////////
//
// Name :          program2.c
// Discription :   Create file
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

    fd = creat(Arr,0777); //logic

    if(-1 == fd) //filter
    {
        printf("Unable to create file\n");
        return ;
    }
    else
    {
        printf("File create successfully \n");
    }

}

int main()
{
    char Fname[50] = {'\0'};

    printf("Enter file name that you want to create \n");
    scanf("%s",Fname);

    OpenFile(Fname); //function call

    return 0;
}