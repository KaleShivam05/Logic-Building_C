/////////////////////////////////////////////////////////////////
//
// Name :          program4.java
// Discription :   Chack whether input is divisible 5 or not
// Input :         integer
// Output :        integer , String
// Author :        Shivam Rajendra Kale
// Date :          05/06/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept input from user
          if input is divisible 5 then
            Display Divisible by 5
          if input is not Divisible 5 then
            Display not Divisible by 5  
       
    Stop         
*/

import java.util.Scanner;

class CheckWhether
{
    public int iNo1;

    public CheckWhether(int iNo1)
    {
        this.iNo1 = iNo1;
    }

    public boolean Check()
    {
        if((iNo1 % 5) == 0)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
}

class problem4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        int iValue = sobj.nextInt();

        boolean bRet = false;

        CheckWhether cobj = new CheckWhether(iValue);

        bRet = cobj.Check();

        if(bRet == true)
        {
            System.out.println("Divisible by 5");
        }
        else
        {
            System.out.println("Not Divisible by 5");
        }
    }
}