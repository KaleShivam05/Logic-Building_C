//////////////////////////////////////////////////////////////////////////
//
// Name :          program1.java
// Discription :   use to Display elements of Array
// Input :         Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          16/10/2025
//
//////////////////////////////////////////////////////////////////////////

import java.util.*;

class MyArray
{
    public void Display(int Arr[], int Brr[])
    {
        int i = 0;

        System.out.println("Elements of first Array are : ");
        for(i = 0; i < Arr.length; i++)
        {
            System.out.print(Arr[i]+"\t");
        }

        System.out.println("\nElements of second Array are : ");
        for(i = 0; i < Brr.length; i++)
        {
            System.out.print(Brr[i]+"\t");
        } 
    }
}

class program1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter isze of first Array : ");
        int iSize = sobj.nextInt();

        int Arr[] = new int [iSize];

        System.out.println("Enter elements : ");
        for(int i = 0; i < iSize; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        System.out.println("Enter isze of second Array : ");
        int iSize1 = sobj.nextInt();

        int Brr[] = new int [iSize1];

        System.out.println("Enter elements : ");
        for(int i = 0; i < iSize1; i++)
        {
            Brr[i] = sobj.nextInt();
        }

        MyArray mobj = new MyArray();

        mobj.Display(Arr, Brr);

        sobj.close();
    }
}