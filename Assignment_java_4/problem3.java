///////////////////////////////////////////////////////////////////////
//
// Name :          problem3.java
// Discription :   Display all non factors
// Input :         integer
// Output :        integer , String
// Author :        Shivam Rajendra Kale
// Date :          14/05/2025
//
///////////////////////////////////////////////////////////////////////

/*
    Start
        Accept Number from User
         Check factors and non factors
            Display non factors 
    Stop         
*/

import java.util.Scanner;
import Problem_OnFactors.Factors;

class problem3 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        int iValue = sobj.nextInt();

        Factors fobj = new Factors(iValue);

        System.out.println("Non factors are :");

        fobj.Nonfactors();

        sobj.close();

    }
}
