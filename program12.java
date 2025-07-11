/////////////////////////////////////////////////////////////////
//
//  File name :     program12.java
//  Descreption :   Display odd numbers
//  Input :         Integer
//  Output :        Integer
//  Author :        Shivam Rajendra Kale
//  Date :          10/07/2025
//
//////////////////////////////////////////////////////////////////

/*
    Start
        Accept number from user
            Display Odd number
    Stop
*/

import java.util.*;

class Number
{
    public void DisplayNonFactors(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNo ; iCnt++)
        {
            if((iNo % iCnt) != 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}

class program12
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int iValue = sobj.nextInt();

        Number nobj = new Number();

        nobj.DisplayNonFactors(iValue);
    }
}
