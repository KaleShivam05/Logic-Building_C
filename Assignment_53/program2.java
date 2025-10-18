//////////////////////////////////////////////////////////////////////////
//
// Name :          program2.java
// Discription :   use to Display minimum elements of Array
// Input :         Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          17/10/2025
//
//////////////////////////////////////////////////////////////////////////

import java.util.*;

class MyArray
{
    public void MinArray(int Arr[], int Brr[])
    {
        int i = 0;
        int iMin1 = Arr[0];
        int iMin2 = Brr[0];

        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] < iMin1)
            {
                iMin1 = Arr[i];
            }  
        }

        for(i = 0; i < Brr.length; i++)
        {
            if(Brr[i] < iMin2)
            {
                iMin2 = Brr[i];
            }        
        } 

        System.out.println("Minimum element of first Array is : "+iMin1);
        System.out.println("Minimum element of Second Array is : "+iMin2);
    }
}

class program2
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

        mobj.MinArray(Arr, Brr);

        sobj.close();
    }
}