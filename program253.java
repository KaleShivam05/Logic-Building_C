/////////////////////////////////////////////////////////////////
//
//  File name :     program253.java
//  Descreption :   Open file & write Jay Ganesh... in the file
//  Author :        Shivam Rajendra Kale
//  Date :          09/08/2025
//
//////////////////////////////////////////////////////////////////

import java.util.*;
import java.io.*;

class program436
{
    public static void main(String A[])
    {
        try
        {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the name of file that you want to write something : ");
            String Fname = sobj.nextLine();

            File fobj = new File(Fname);

            if(fobj.exists())
            {
                FileOutputStream foobj = new FileOutputStream(fobj);
                String str = "Jay Ganesh...";

                foobj.write(str);                
            }
            else
            {
                System.out.println("File not present in current directory..");
                return;
            }
        }
        catch(IOException iobj)
        {}
        catch(Exception eobj)
        {}
    }
}