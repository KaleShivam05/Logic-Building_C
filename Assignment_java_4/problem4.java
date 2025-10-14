////////////////////////////////////////////////////////////////////
//
// Name :          problem4.java
// Discription :   Display summation of non factors
// Input :         integer
// Output :        integer , String
// Author :        Shivam Rajendra Kale
// Date :          14/05/2025
//
////////////////////////////////////////////////////////////////////

/*
    Start
        Accept Number from User
         Check factors then
           Display Summation of non factors
    Stop         
*/

import java.util.Scanner;
import Problem_OnFactors.Factors;

class problem4 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        int iValue = sobj.nextInt();

        Factors fobj = new Factors(iValue);

        int iResult;

        iResult = fobj.NonFactorsSummation();

        System.out.println("Summation of Non factors is : "+iResult);

        sobj.close();

    }
}
