//////////////////////////////////////////////////////////////////////////
//
// Name :          program1.java
// Discription :   use to Display difference between summation of Array
// Input :         Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          17/10/2025
//
//////////////////////////////////////////////////////////////////////////

import java.util.*;

class MyArray
{
    public int DiffArray(int Arr[], int Brr[])
    {
        int i = 0, iSum = 0, iSum1 = 0;
        
        for(i = 0; i < Arr.length; i++)
        {
            iSum = iSum + Arr[i];
        }
        
        for(i = 0; i < Brr.length; i++)
        {
            iSum1 = iSum1 + Brr[i];
        } 

        return (iSum - iSum1);
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

        int iRet = mobj.DiffArray(Arr, Brr);

        System.out.println("Difference between summation of two Array is : "+iRet);

        sobj.close();
    }
}