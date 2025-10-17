//////////////////////////////////////////////////////////////////////////
//
// Name :          program3.java
// Discription :   use to Display Odd elements of Array
// Input :         Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          16/10/2025
//
//////////////////////////////////////////////////////////////////////////

import java.util.*;

class MyArray
{
    public void DisplayOdd(int Arr[], int Brr[])
    {
        int i = 0;

        System.out.println("Even elements of first Array are : ");
        for(i = 0; i < Arr.length; i++)
        {
            if((Arr[i] % 2 ) != 0)
            {
                System.out.print(Arr[i]+"\t");
            }  
        }

        System.out.println("\nEven elements of second Array are : ");
        for(i = 0; i < Brr.length; i++)
        {
            if((Brr[i] % 2 ) != 0)
            {
                System.out.print(Brr[i]+"\t");
            }         
        } 
    }
}

class program3
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

        mobj.DisplayOdd(Arr, Brr);

        sobj.close();
    }
}