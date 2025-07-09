/////////////////////////////////////////////////////////////////
//
//  File name :     program2.java
//  Descreption :   Input in java
//  Input :         Integer, String, float
//  Output :        Integer, String, float
//  Author :        Shivam Rajendra Kale
//  Date :          09/07/2025
//
//////////////////////////////////////////////////////////////////

/*
    Start
        Accept number from user
            & Display       
    Stop
*/

import java.util.*;

class program52
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name : ");
        String name = sobj.nextLine();

        System.out.println("Enter your age : ");
        int Age = sobj.nextInt();

        System.out.println("Enter your marks : ");
        float Marks = sobj.nextFloat();

        System.out.println("Name : "+name);
        System.out.println("Age : "+Age);
        System.out.println("Marks : "+Marks);
    }
}