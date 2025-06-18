////////////////////////////////////////////////////////////////////////
//
// Name :          program5.c
// Discription :   write in file
// Input :         String
// Output :        String
// Author :        Shivam Rajendra Kale
// Date :          11/06/2025
//
///////////////////////////////////////////////////////////////////////

/*
  Start
    Accept file name & one string as input from user
        open that file in write mode than
          write that string into file
  Stop    
*/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

void OpenFile(char Fname[], char Buffer[])
{
    int fd = 0, iRet = 0, iCount = 0;
    char *ptr = Buffer;

    fd = open(Fname,O_RDWR | O_APPEND); 

    if(-1 == fd) //filter
    {
        printf("Unable to create file\n");
        return ;
    }
    else
    {   
        while(*ptr != '\0')
        {
            iCount++;
            ptr++;
        }

        iRet = write(fd,Buffer,iCount);

        if(-1 == iRet)
        {
            printf("Unable to wriet in file\n");
            return;
        }
        else
        {
            printf("%d bytes successfully written in %s file", iRet, Fname);
        }
    }
}

int main()
{
    char Frr[50] = {'\0'};
    char Arr[50] = {'\0'};

    printf("Enter file name \n");
    scanf("%s",Frr);

    printf("Enter string :\n");
    scanf(" %[^'\n']s",Arr);

    OpenFile(Frr,Arr); //function call

    return 0;
}