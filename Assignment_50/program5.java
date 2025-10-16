//////////////////////////////////////////////////////////////////////////
//
// Name :          program5.java
// Discription :   use to Display pattern
// Input :         Integer
// Output :        Charecters
// Author :        Shivam Rajendra Kale
// Date :          15/10/2025
//
//////////////////////////////////////////////////////////////////////////

import java.util.*;

class pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;
        
        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                if(i == j || i == 0 || j == 0 || j == iRow-1 || i == iCol-1)
                {
                    System.out.print(j+1+"\t");
                }
                else
                {
                    System.out.print("\t");
                }
            }
            System.out.println();
        }
    }
}

class program5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows :");
        int iRow = sobj.nextInt();

        System.out.println("Enter number of column :");
        int iCol = sobj.nextInt();

        pattern pobj = new pattern();

        pobj.Display(iRow, iCol);

        sobj.close();
    }
}