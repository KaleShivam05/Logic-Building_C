/////////////////////////////////////////////////////////////////
//
// Name :          problem5.java
// Discription :   Display frist 5 multiple of N
// Input :         integer
// Output :        integer
// Author :        Shivam Rajendra Kale
// Date :          14/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept Number from User
            Display frist 5 multiple of number  
    Stop         
*/

import java.util.Scanner;
import Numbers.Display;

class problem5

{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        int iValue = sobj.nextInt();

        Display dobj = new Display(iValue);

        dobj.DisplayMultiple();

        sobj.close();
    }
}