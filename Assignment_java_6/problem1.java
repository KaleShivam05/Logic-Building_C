/////////////////////////////////////////////////////////////////
//
// Name :          problem1.java
// Discription :   Check number 
// Input :         integer
// Output :        String 
// Author :        Shivam Rajendra Kale
// Date :          14/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept input from user
            if number is less than 50
                Display Small
            if number is greater than 50 and less than 100
                Display Medium
            if number is greater than 100 
                Display Large  
    Stop                  
*/

import java.util.Scanner;
import N_Number.Display;

class problem1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        int iValue = sobj.nextInt();

        Display dobj = new Display(iValue);

        dobj.CheckNumber();

        sobj.close();
    }
}