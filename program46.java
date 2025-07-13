/////////////////////////////////////////////////////////////////
//
//  File name :     program46.java
//  Descreption :   Display first three index of a string
//  Input :         String
//  Output :        String
//  Author :        Shivam Rajendra Kale
//  Date :          12/07/2025
//
//////////////////////////////////////////////////////////////////


import java.util.*;

class program46
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String name = sobj.nextLine();

        System.out.println(name.charAt(0));
        System.out.println(name.charAt(1));
        System.out.println(name.charAt(2));
    }
}