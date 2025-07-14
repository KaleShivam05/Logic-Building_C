/////////////////////////////////////////////////////////////////
//
//  File name :     program54.java
//  Descreption :   Count small charecters
//  Input :         String
//  Output :        String
//  Author :        Shivam Rajendra Kale
//  Date :          13/07/2025
//
//////////////////////////////////////////////////////////////////

/*
    Start
        Accept input from user
            Count small charecters
    Stop
*/

import java.util.Scanner;

import MarvellousLB.MarvellousString;

class program54
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter string : ");
        String data = sobj.nextLine();

        MarvellousString mobj = new MarvellousString(data);

        int iRet = 0;

        iRet = mobj.CountSmall();

        System.out.println("Number of small characters are : "+iRet);
    }
}