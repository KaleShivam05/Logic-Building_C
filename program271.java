/////////////////////////////////////////////////////////////////
//
//  File name :     program271.java
//  Descreption :   Creat a header 100 bytes
//  Author :        Shivam Rajendra Kale
//  Date :          13/08/2025
//
//////////////////////////////////////////////////////////////////
  

import java.util.*;
import java.io.*;

class program271
{
    public static void main(String A[])
    {
        try
        {
           String Header = "PPA.txt 30";

           System.out.println("Header size is : "+Header.length());

            int i = 0;

           for(i = Header.length(); i < 100; i++)
           {
                Header = Header + " ";
           }

           System.out.println("Header size after update is : "+Header.length());

           System.out.println("Updated header is : "+Header);

        }
        catch(Exception eobj)
        {}
    }
}
