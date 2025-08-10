/////////////////////////////////////////////////////////////////
//
//  File name :     program252.java
//  Descreption :   Check getName & length functions
//  Author :        Shivam Rajendra Kale
//  Date :          09/08/2025
//
//////////////////////////////////////////////////////////////////


import java.util.*;
import java.io.*;

class program435
{
    public static void main(String A[]) throws Exception
    {
        File fobj = new File("Marvellous.txt");
        System.out.println("File name is : "+fobj.getName());
        System.out.println("File size is : "+fobj.length());
    }
}