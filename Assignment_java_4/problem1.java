////////////////////////////////////////////////////////////////////
//
// Name :          problem1.java
// Discription :   Display Multiplication of factors
// Input :         integer
// Output :        integer , String
// Author :        Shivam Rajendra Kale
// Date :          14/05/2025
//
////////////////////////////////////////////////////////////////////

/*
    Start
        Accept Number from User
         Check factors of a numbers 
           then Display multiplication of factors
    Stop         
*/

import java.util.Scanner;
import Problem_OnFactors.Factors;

class problem1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        int iValue = sobj.nextInt();

        Factors fobj = new Factors(iValue);

        int iResult;

        iResult = fobj.factorsMultiplication();

        System.out.println("Multipication of factors is :"+iResult);

        sobj.close();

    }
}