/////////////////////////////////////////////////////////////////
//
//  File name :     program9.java
//  Descreption :   Check Even
//  Input :         Integer
//  Output :        Integer
//  Author :        Shivam Rajendra Kale
//  Date :          09/07/2025
//
//////////////////////////////////////////////////////////////////

/*
    Start
        Accept number from user
            Check
                if number is Even than 
                    Display number is Even
                if number is not Even than
                    Display number is not Even    
    Stop
*/

import java.util.*;

class Number
{
    public boolean CheckEven(int iNo)
    {
        if((iNo % 2) == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class program9
{
    public static void main(String A[])
    {
        boolean bRet = false;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int iValue = sobj.nextInt();

        Number nobj = new Number();

        bRet = nobj.CheckEven(iValue);

        if(bRet == true)
        {
            System.out.println(iValue+" is even");
        }
        else
        {
            System.out.println(iValue+" is odd");
        }
    }
}
