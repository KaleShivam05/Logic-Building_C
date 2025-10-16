/////////////////////////////////////////////////////////////////
//
// Name :          problem2.java
// Discription :   Display numbers of input
// Input :         integer
// Output :        integer
// Author :        Shivam Rajendra Kale
// Date :          14/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept Number from User
            Display one by numbers    
    Stop         
*/

import java.util.Scanner;
import Numbers.Display;

class problem2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        int iValue = sobj.nextInt();

        Display dobj = new Display(iValue);

        dobj.DisplayNumber();

        sobj.close();
    }
}