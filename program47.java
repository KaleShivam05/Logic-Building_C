/////////////////////////////////////////////////////////////////
//
//  File name :     program47.java
//  Descreption :   Display charecter from string
//  Input :         String
//  Output :        String
//  Author :        Shivam Rajendra Kale
//  Date :          12/07/2025
//
//////////////////////////////////////////////////////////////////


import java.util.*;

class program47
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt = 0;

        System.out.println("Enter String : ");
        String name = sobj.nextLine();

        for(iCnt = 0; iCnt < name.length(); iCnt++)
        {   
            System.out.println(name.charAt(iCnt));
        }
    }
}