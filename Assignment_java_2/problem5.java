/////////////////////////////////////////////////////////////////
//
// Name :          program5.java
// Discription :   Check whether number is even or odd
// Input :         integer
// Output :        integer , String
// Author :        Shivam Rajendra Kale
// Date :          12/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept Number from User
         Check number is Even or Odd
           if number is even then
             Display number is Even
           if number is not Even then
             Display number is Odd
    Stop         
*/

import java.util.Scanner;

class Display
{
    public int iNo1;

    public Display(int iNo1)
    {
        this.iNo1 = iNo1;
    }

    public boolean CheckEven()
    {
        if((iNo1 % 2) == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
class problem5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        int iValue1 = sobj.nextInt();

        boolean bRet = false;

        Display dobj = new Display(iValue1);

        bRet = dobj.CheckEven();

        if(bRet == true)
        {
            System.out.println(iValue1+" is Even number");
        }
        else
        {
            System.out.println(iValue1+" is Odd number");
        }
    }

}
