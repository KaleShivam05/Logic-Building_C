/////////////////////////////////////////////////////////////////
//
//  File name :     program45.java
//  Descreption :   count charecter from string
//  Input :         String
//  Output :        String
//  Author :        Shivam Rajendra Kale
//  Date :          12/07/2025
//
//////////////////////////////////////////////////////////////////


import java.util.*;

class program45
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name : ");
        String name = sobj.nextLine();

        System.out.println("Your name is : "+name);

        System.out.println("String length is : "+name.length());
    }
}