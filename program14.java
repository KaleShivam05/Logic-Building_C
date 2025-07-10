/////////////////////////////////////////////////////////////////
//
//  File name :     program14.java
//  Descreption :   Display summation of even & odd numbers
//  Input :         Integer
//  Output :        Integer
//  Author :        Shivam Rajendra Kale
//  Date :          10/07/2025
//
//////////////////////////////////////////////////////////////////

/*
    Start
        Accept number from user
            Display summation of even & odd numbers
    Stop
*/

import java.util.*;

class Number
{
    public void Sum(int iNo)
    {
        int iCnt = 0, iSum1 = 0, iSum2 = 0;

        for(iCnt = 1; iCnt <= iNo ; iCnt++) 
        {
            if((iNo % iCnt) == 0)
            {
                iSum1 = iSum1 + iCnt;
            }
            else
            {
                iSum2 = iSum2 + iCnt;
            }
        }
        System.out.println("Summation of factors : "+iSum1);
        System.out.println("Summation of non factors : "+iSum2);
    }
}

class program64
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int iValue = sobj.nextInt();

        Number nobj = new Number();

        nobj.Sum(iValue);
    }
}