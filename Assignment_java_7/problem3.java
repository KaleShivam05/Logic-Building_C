/////////////////////////////////////////////////////////////////
//
// Name :          problem3.java
// Discription :   Check number Even
// Input :         integer
// Output :        integer
// Author :        Shivam Rajendra Kale
// Date :          18/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept input from user
          Check even factorial than
            Display multiplication of even factorial
    Stop                  
*/

import java.util.Scanner;
import NNumbers.Display;

class problem3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        int ivalue = sobj.nextInt();

        Display dobj = new Display(ivalue);

        int iResult = 0;

        iResult = dobj.MultiplicationOfEvenFactorial();

        System.out.println("Even factorial of number is :"+iResult);

        sobj.close();
    }
}