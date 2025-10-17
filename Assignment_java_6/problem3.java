/////////////////////////////////////////////////////////////////
//
// Name :          problem3.java
// Discription :   Find factorial of number
// Input :         integer
// Output :        integer 
// Author :        Shivam Rajendra Kale
// Date :          14/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept number from user 
            find factorial of number than
              Display factorial
    Stop
             
*/

import java.util.Scanner;
import N_Number.Display;

class problem3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        int iValue = sobj.nextInt();

        Display dobj = new Display(iValue);

        long iResult = 0;

        iResult = dobj.factorial();

        System.out.println("factorial of "+iValue+" is : "+iResult);

        sobj.close();
    }
}