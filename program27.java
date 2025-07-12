/////////////////////////////////////////////////////////////////
//
//  File name :     program27.java
//  Descreption :   Display pattern
//  Author :        Shivam Rajendra Kale
//  Date :          11/07/2025
//
//////////////////////////////////////////////////////////////////

// Input : 4  4
// Output :    
/*
    A   B   C   D
    A   B   C   D
    A   B   C   D
    A   B   C   D
*/

import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;
        char ch = 'A';

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1, ch = 'A'; j <= iCol; j++, ch++)
            {
                System.out.print(ch+"\t");
            }
            System.out.println();
        }
    }
}

class program27
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0, iValue2 = 0;

        System.out.println("Enter number of rows : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iValue1, iValue2);
    }
}