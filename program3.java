/////////////////////////////////////////////////////////////////
//
//  File name :     program3.java
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

class program53
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first number : ");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter second number : ");
        int iNo2 = sobj.nextInt();

        int iAns = iNo1 + iNo2;

        System.out.println("Addition is : "+iAns);
    }
}