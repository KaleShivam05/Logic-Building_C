//////////////////////////////////////////////////////////////////////////
//
// Name :          program3.java
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
        char ch = 'A';

        for(i = 0; i < iRow; i++,ch++)
        {
            for(j = 0; j < iCol; j++)
            {
                System.out.print(ch+"\t");   
            }
            System.out.println();
        }
    }
}

class program3
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