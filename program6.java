/////////////////////////////////////////////////////////////////
//
//  File name :     program6.java
//  Descreption :   Display addition of two numbers
//  Input :         Integer
//  Output :        Integer
//  Author :        Shivam Rajendra Kale
//  Date :          09/07/2025
//
//////////////////////////////////////////////////////////////////

/*
    Start
        Accept number from user
            return addition two number
    Stop
*/

import java.util.*;

class program6
{
    public int Addition(int iNo1, int iNo2)
    {
        int iAns = 0;
        iAns = iNo1 + iNo2;
        return iAns;
    }

    public static void main(String A[])
    {
        int iValue1 = 0, iValue2 = 0, iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first number : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter second number : ");
        iValue2 = sobj.nextInt();

        program56 pobj = new program56();

        iRet = pobj.Addition(iValue1, iValue2);

        System.out.println("Addition is : "+iRet);

    }
}
