/////////////////////////////////////////////////////////////////
//
// Name :          program5.java
// Discription :   Check whether charecter is vowel or not
// Input :         char
// Output :        String
// Author :        Shivam Rajendra Kale
// Date :          o7/06/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept character from User
         Check 
           if character is Vowel than
             Display  It is Vowel
           if  character is not Vowel than
             Display It is not Vowel
    Stop         
*/

import java.util.Scanner;
import N_Numbers.Display;

class problem5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Charactre :");
        char ch = sobj.next().charAt(0);

        Display dobj = new Display();

        boolean bRet = false;

        bRet = dobj.CheckVowel(ch);

        if(true == bRet)
        {
           System.out.println("It is Vowel");
        }
        else
        {
           System.out.println("It is not Vowel");
        }
    }
}