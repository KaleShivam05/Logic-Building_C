/////////////////////////////////////////////////////////////////
//
// Name :          problem2.java
// Discription :   Display number into word
// Input :         integer
// Output :        String
// Author :        Shivam Rajendra Kale
// Date :          14/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept number for user 
            Convert number into word
    Stop         
*/
import java.util.Scanner;
import N_Number.Display;

class problem2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        int iValue = sobj.nextInt();

        Display dobj = new Display(iValue);

        dobj.ConvertNumber();

        sobj.close();
    }
}