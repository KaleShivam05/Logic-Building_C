/////////////////////////////////////////////////////////////////
//
// Name :          problem4.java
// Discription :   Convert case of character
// Input :         integer
// Output :        charecter
// Author :        Shivam Rajendra Kale
// Date :          o7/06/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept Charecter from User
            if Charecter is capital then
               Convert into Small letter and Display
    Stop         
*/

import java.util.Scanner;

class Display
{
    public void CharCapitaltoSamll(char Ch)
    {
        if((Ch >= 'A') && (Ch <= 'Z'))
        {
            Ch = Ch + 32;
        }
        System.out.println(Ch);
    }
}
class problem4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Charactre :");
        char ch = sobj.next().charAt(0);

        Display dobj = new Display();

        dobj.CharCapitaltoSamll(ch);
    }
}