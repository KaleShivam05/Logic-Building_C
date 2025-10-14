/////////////////////////////////////////////////////////////////////////
//
// Name :          problem5.java
// Discription :   Display Difference Summation of factors & non factors
// Input :         integer
// Output :        integer , String
// Author :        Shivam Rajendra Kale
// Date :          14/05/2025
//
//////////////////////////////////////////////////////////////////////////

/*
    Start
        Accept Number from User
         Check factors and non factors
           make summation of factors and non factors
            Display Difference between Summation of factors and non factors
    Stop         
*/

import java.util.Scanner;
import Problem_OnFactors.Factors;

class problem5 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        int iValue = sobj.nextInt();

        Factors fobj = new Factors(iValue);

        int iResult;

        iResult = fobj.DiffFactorsSummation();

        System.out.println("Difference between Summation of Non factors & factors is : "+iResult);

        sobj.close();

    }
}
