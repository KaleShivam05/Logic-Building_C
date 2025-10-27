/////////////////////////////////////////////////////////////////
//
// Name :          problem4.java
// Discription :   Display multiplication of odd factorials
// Input :         Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          18/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept input from user
            Check odd factorial than
                Display multiplication of odd factorials    
    Stop                  
*/

import java.util.Scanner;
import NNumbers.Display;

class problem4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        int ivalue = sobj.nextInt();

        Display dobj = new Display(ivalue);

        int iResult = 0;

        iResult = dobj.MultiplicationOfOddFactorial();

        System.out.println("Odd factorial of number is :"+iResult);

        sobj.close();
    }

}
