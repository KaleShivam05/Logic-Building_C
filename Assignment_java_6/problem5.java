/////////////////////////////////////////////////////////////////
//
// Name :          program5.c
// Discription :   Display table in reverse order
// Input :         integer
// Output :        integer 
// Author :        Shivam Rajendra Kale
// Date :          14/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept input from user
            Display table in reverse order
    Stop
*/

import java.util.Scanner;
import N_Number.Display;

class problem5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        int iValue = sobj.nextInt();

        Display dobj = new Display(iValue);

        dobj.DisplayReverseTable();

        sobj.close();
    }
}