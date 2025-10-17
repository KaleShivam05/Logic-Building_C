//////////////////////////////////////////////////////////////////////////
//
// Name :          program5.java
// Discription :   use to Display Even elements of Array
// Input :         Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          16/10/2025
//
//////////////////////////////////////////////////////////////////////////

import java.util.*;

class MyArray
{
    public void DisplaySummation(int Arr[], int Brr[])
    {
        int i = 0, iSum = 0;
        
        for(i = 0; i < Arr.length; i++)
        {
            iSum = iSum + Arr[i];
        }
        System.out.println("Summation of all elements of first Array is : "+iSum);
        
        for(i = 0, iSum = 0; i < Brr.length; i++)
        {
            iSum = iSum + Brr[i];
        } 
        System.out.println("Summation of all elements of Second Array is : "+iSum);
    }
}

class program5
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

        mobj.DisplaySummation(Arr, Brr);

        sobj.close();
    }
}