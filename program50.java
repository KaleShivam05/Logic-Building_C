/////////////////////////////////////////////////////////////////
//
//  File name :     program50.java
//  Descreption :   Display small charecters
//  Input :         String
//  Output :        String
//  Author :        Shivam Rajendra Kale
//  Date :          12/07/2025
//
//////////////////////////////////////////////////////////////////

/*
    Start
        Accept input from user
            Display small charecters
    Stop
*/

import java.util.Scanner;

class program50
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter string : ");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        int iCount = 0, iCnt = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                iCount++;
            }
        }

        System.out.println("Number of small characters are : "+iCount);
    }
}