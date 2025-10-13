//////////////////////////////////////////////////////////////////////////
//
// Name :          program4.java
// Discription :   use to Display pattern
// Input :         Integer
// Output :        Charecters
// Author :        Shivam Rajendra Kale
// Date :          12/10/2025
//
//////////////////////////////////////////////////////////////////////////

import java.util.*;

class pattern
{
    public void Display(int iRow, int iCol)
    {
        int Arr[][] = new int[iRow][iCol];
        int i = 0, j = 0;

        for(i = iRow; i >= 1; i--)
        {
            for(j = 0; j < iCol; j++)
            {
                if(j % 2 == 0)
                {
                    System.out.print("*\t"); 
                }
                else
                {
                    System.out.print("#\t");
                }   
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

        System.out.println("Enter number of rows :");
        int iRow = sobj.nextInt();

        System.out.println("Enter number of columns :");
        int iCol = sobj.nextInt();

        pattern pobj = new pattern();

        pobj.Display(iRow,iCol);

        sobj.close();
    }
}