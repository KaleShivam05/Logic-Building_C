/////////////////////////////////////////////////////////////////
//
// Name :          problem4.java
// Discription :   Display odd numbers up to N
// Input :         integer
// Output :        integer 
// Author :        Shivam Rajendra Kale
// Date :          14/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept Number from User
            Display Odd numbers
    Stop         
*/

import java.util.Scanner;
import Numbers.Display;

class problem4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        int iValue = sobj.nextInt();

        Display dobj = new Display(iValue);

        dobj.DisplayOdd();

        sobj.close();
    }
}