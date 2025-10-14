//////////////////////////////////////////////////////////////////////////
//
// Name :          program1.java
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
    public void Display(int iRow, String str)
    {
        int i = 0, j = 0;
        int Arr[][] = new int [iRow][str.length()];
        char Brr[] = str.toCharArray();
       
        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < str.length(); j++)
            {
               System.out.print(Brr[j]+"\t");
            }
            System.out.println();
        }
    }
}

class program1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows :");
        int iRow = sobj.nextInt();

        sobj.nextLine();

        System.out.println("Enter a name :");
        String str = sobj.nextLine();

        pattern pobj = new pattern();

        pobj.Display(iRow,str);

        sobj.close();
    }
}