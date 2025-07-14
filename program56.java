/////////////////////////////////////////////////////////////////
//
//  File name :     program56.java
//  Descreption :   Create Array
//  Input :         Integer
//  Output :        Integer
//  Author :        Shivam Rajendra Kale
//  Date :          13/07/2025
//
//////////////////////////////////////////////////////////////////

/*
    Start
        Accept input from user
            Display elements of aaray
    Stop
*/

import java.util.Scanner;

class program56
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements : ");
        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        int iCnt = 0;

        System.out.println("Enter the elements : ");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        System.out.println("Elements of the array are : ");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }

        Arr = null;
        sobj = null;
    }
}