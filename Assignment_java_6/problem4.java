/////////////////////////////////////////////////////////////////
//
// Name :          problem4.java
// Discription :   Display table
// Input :         integer
// Output :        integer 
// Author :        Shivam Rajendra Kale
// Date :          14/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept number from user
            Display table of that number
    Stop        
*/

import java.util.Scanner;
import N_Number.Display;

class problem4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        int iValue = sobj.nextInt();

        Display dobj = new Display(iValue);

        dobj.DisplayTable();

        sobj.close();
    }
}