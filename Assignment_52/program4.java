//////////////////////////////////////////////////////////////////////////
//
// Name :          program4.java
// Discription :   use to Combination of two Array
// Input :         Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          16/10/2025
//
//////////////////////////////////////////////////////////////////////////

import java.util.*;

class MyArray
{
    public int[] ArrayConcate(int Arr[], int Brr[])
    {
        int i = 0, j = 0;

        int Crr[] = new int[Arr.length + Brr.length];

        for(i = 0; i < Arr.length; i++)
        {
            Crr[i] = Arr[i];  
        }

        for(i = 0, j = Arr.length; i < Brr.length; i++, j++)
        {
            Crr[j] = Brr[i];         
        } 

        return Crr;
    }
}

class program4
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

        int Crr[] = mobj.ArrayConcate(Arr, Brr);

        for(int i = 0; i < Crr.length; i++)
        {
            System.out.print(Crr[i]+"\t");
        }

        sobj.close();
    }
}