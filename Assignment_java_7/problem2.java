/////////////////////////////////////////////////////////////////
//
// Name :          problem2.java
// Discription :   Check number 
// Input :         integer
// Output :        integer 
// Author :        Shivam Rajendra Kale
// Date :          18/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept input from user
            Convert into INR
    Stop                  
*/

import java.util.Scanner;
import NNumbers.Display;

class problem2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        int ivalue = sobj.nextInt();

        Display dobj = new Display(ivalue);

        int iResult = 0;

        iResult = dobj.DollarToINR();

        System.out.println("Dollar To INR is :"+iResult);

        sobj.close();
    }
}