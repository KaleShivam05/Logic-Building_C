/////////////////////////////////////////////////////////////////
//
// Name :          problem5.java
// Discription :   Check Difference
// Input :         integer
// Output :        integer
// Author :        Shivam Rajendra Kale
// Date :          18/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept input from user
            Check even or numbers
               do munliplication of even numbers
               do multiplication of odd numbers
                    Display Difference  
           
    Stop                  
*/

import java.util.Scanner;
import NNumbers.Display;

class problem5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        int ivalue = sobj.nextInt();

        Display dobj = new Display(ivalue);

        int iResult = 0;

        iResult = dobj.DifferenceBetnFactorial();

        System.out.println("Factorial Difference is :"+iResult);

        sobj.close();
    }
}