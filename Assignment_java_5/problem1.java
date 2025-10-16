/////////////////////////////////////////////////////////////////
//
// Name :          problem1.java
// Discription :   Display $ and * for user
// Input :         integer
// Output :        Charecter
// Author :        Shivam Rajendra Kale
// Date :          14/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept Number from User
            Display number of times $ and *   
    Stop         
*/

import java.util.Scanner;
import Numbers.Display;

class problem1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        int iValue = sobj.nextInt();

        Display dobj = new Display(iValue);

        dobj.DisplayChar();

        sobj.close();
    }
}