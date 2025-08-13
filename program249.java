/////////////////////////////////////////////////////////////////
//
//  File name :     program249.java
//  Descreption :   Create a new file use try-catch block
//  Author :        Shivam Rajendra Kale
//  Date :          09/08/2025
//
//////////////////////////////////////////////////////////////////

import java.util.*;
import java.io.*;

class program249
{
    public static void main(String A[])
    {
        try
        {
            File fobj = new File("Marvellous.txt");
            fobj.createNewFile();
        }
        catch(IOException iobj)
        {}
        catch(Exception eobj)
        {}
    }
}
