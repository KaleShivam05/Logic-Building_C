//////////////////////////////////////////////////////////////////////////
//
// Name :          program3.java
// Discription :   use to Display revers the Array
// Input :         Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          17/10/2025
//
//////////////////////////////////////////////////////////////////////////

import java.util.*;

class MyArray
{
    public int[] CopyArrayRev(int Arr[], int Brr[])
    {
        int i = 0, k = 0, j = 0;

        int Crr[] = new int [Arr.length + Brr.length];
        int Drr[] = new int [Crr.length];

        for(i = 0, k = 0, j = (- Arr.length) ; i < (Arr.length + Brr.length); i++, k++, j++)
        {
            if(i < Arr.length)
            {
                Crr[k] = Arr[i];
            }
            else 
            {
                Crr[k] = Brr[j];
            }
        }

        for(i = (Crr.length - 1) , j = 0; i >= 0; i--, j++)
        {
            Drr[j] = Crr[i];
        } 

        return Drr;
    }
}

class program3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int i = 0;

        System.out.println("Enter isze of first Array : ");
        int iSize = sobj.nextInt();

        int Arr[] = new int [iSize];

        System.out.println("Enter elements : ");
        for(i = 0; i < iSize; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        System.out.println("Enter isze of second Array : ");
        int iSize1 = sobj.nextInt();

        int Brr[] = new int [iSize1];

        System.out.println("Enter elements : ");
        for(i = 0; i < iSize1; i++)
        {
            Brr[i] = sobj.nextInt();
        }

        MyArray mobj = new MyArray();

        int Err[] = mobj.CopyArrayRev(Arr, Brr);

        for(i = 0; i < Err.length; i++)
        {
            System.out.print(Err[i]+"\t");
        }

        sobj.close();
    }
}