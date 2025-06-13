////////////////////////////////////////////////////////////////////
//
// Name :          program1.c
// Discription :   Check whether input is alphbet or not 
// Input :         Character
// Output :        string
// Author :        Shivam Rajendra Kale
// Date :          06/06/2025
//
////////////////////////////////////////////////////////////////////

/*
  Start
    Accept input from user 
      Check whether input is alphbet or not 
       if the input is alphabet than
        Display It is Character
       if the input is nor alphabet than
        Display It is not a Character
  Stop    
*/

#include<stdio.h>

void CheckAlphabet()
{
   
    for(int i = 0; i <= 255; i++)
    {
       printf("%c\t%d\t%o\t%x \n", i, i, i, i);
    }

}

int main()
{
    
    printf("--------- ASCII Table --------- \n");
  
    CheckAlphabet();

    return 0;
}
