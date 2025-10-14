/////////////////////////////////////////////////////////////////////
//
// Name :          problem2.java
// Discription :   Display factors in Decreasing order
// Input :         integer
// Output :        integer , String
// Author :        Shivam Rajendra Kale
// Date :          14/05/2025
//
/////////////////////////////////////////////////////////////////////

/*
    Start
        Accept Number from User
         Check factors then
            Display factors in Decreasing order
    Stop         
*/
import java.util.Scanner;
import Problem_OnFactors.Factors;

class problem2 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        int iValue = sobj.nextInt();

        Factors fobj = new Factors(iValue);

        fobj.factorsDecreasing();

        sobj.close();

    }
}
