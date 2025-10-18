/////////////////////////////////////////////////////////////////
//
// Name :          problem1.java
// Discription :   Display pattern
// Input :         integer
// Output :        Charecter 
// Author :        Shivam Rajendra Kale
// Date :          18/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept input from user
          Display pattern
          Input : 3
          Output : *  *  *  #  #  #
    Stop                  
*/

import java.util.Scanner;
import NNumbers.Display;

class problem1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        int ivalue = sobj.nextInt();

        Display dobj = new Display(ivalue);

        dobj.DisplayPattern();

        sobj.close();
    }
}