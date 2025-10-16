/////////////////////////////////////////////////////////////////
//
// Name :          problem3.java
// Discription :   Display number line
// Input :         integer
// Output :        integer 
// Author :        Shivam Rajendra Kale
// Date :          14/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept Number from User
            Dislpay number line  
    Stop         
*/

import java.util.Scanner;
import Numbers.Display;

class problem3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        int iValue = sobj.nextInt();

        Display dobj = new Display(iValue);

        dobj.DisplayLine();

        sobj.close();
    }
}
