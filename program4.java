/////////////////////////////////////////////////////////////////
//
//  File name :     program4.java
//  Descreption :   Display addition of two numbers
//  Input :         Integer
//  Output :        Integer
//  Author :        Shivam Rajendra Kale
//  Date :          09/07/2025
//
//////////////////////////////////////////////////////////////////

/*
    Start
        Accept number from user
            return addition of two number
    Stop
*/

import java.util.Scanner;

class program4
{
    public static void main(String A[])
    {
        Scanner sobj = null;
        int iNo1 = 0, iNo2 = 0, iAns = 0;

        sobj = new Scanner(System.in);

        System.out.println("Enter first number : ");
        iNo1 = sobj.nextInt();

        System.out.println("Enter second number : ");
        iNo2 = sobj.nextInt();

        iAns = iNo1 + iNo2;

        System.out.println("Addition is : "+iAns);
    }
}
