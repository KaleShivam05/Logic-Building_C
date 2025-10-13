/////////////////////////////////////////////////////////////////
//
// Name :          problem2.java
// Discription :   Display factors on screen
// Input :         integer
// Output :        integer , String
// Author :        Shivam Rajendra Kale
// Date :          o7/06/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept Number from User
           Check factors of number then 
              Display factors
    Stop         
*/

import java.util.Scanner;
import N_Numbers.Display; //User define package

class problem2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        int iValue = sobj.nextInt();

        Display dobj = new Display();

        dobj.DisplayFactors(iValue);

    }
}