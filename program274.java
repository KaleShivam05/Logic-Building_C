/////////////////////////////////////////////////////////////////
//
//  File name :     program274.java
//  Descreption :   Display size of String 
//  Author :        Shivam Rajendra Kale
//  Date :          13/08/2025
//
//////////////////////////////////////////////////////////////////
 

import java.util.*;
import java.io.*;

class program274
{
    public static void main(String A[])
    {
        try
        {
            String str = "     Marvellous Infosystems Pune     ";

            System.out.println("Original length : "+str.length());

            str = str.trim();

            System.out.println("Updated length : "+str.length());
        }
        catch(Exception eobj)
        {}
    }
}