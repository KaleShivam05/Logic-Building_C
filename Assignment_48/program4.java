//////////////////////////////////////////////////////////////////////////
//
// Name :          program4.java
// Discription :   use to Display pattern
// Input :         Integer
// Output :        Charecters
// Author :        Shivam Rajendra Kale
// Date :          13/10/2025
//
//////////////////////////////////////////////////////////////////////////

import java.util.*;

class pattern
{
    public void Display(String str)
    {
        int i = 0, j = 0;
        int Arr[][] = new int [str.length()][str.length()];
        char Brr[] = str.toCharArray();
       
        for(i = str.length(); i >= 1; i--)
        {
            for(j = 0; j < i; j++)
            {
               System.out.print(Brr[j]+"\t");
            }
            System.out.println();
        }

        for(i = 0; i < str.length(); i++)
        {
            for(j = 0; j <= i; j++)
            {
               System.out.print(Brr[j]+"\t");
            }
            System.out.println();
        }
    }
}

class program4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a name :");
        String str = sobj.nextLine();

        pattern pobj = new pattern();

        pobj.Display(str);

        sobj.close();
    }
}