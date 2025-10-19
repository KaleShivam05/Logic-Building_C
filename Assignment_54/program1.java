//////////////////////////////////////////////////////////////////////////
//
// Name :          program1.java
// Discription :   use to Reverse the digits of all elements 
// Input :         Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          18/10/2025
//
//////////////////////////////////////////////////////////////////////////

import java.util.*;

class MyArray
{
    public void RevarseArray(int Arr[])
    {
        int i = 0,iDigit = 0, iReverse = 0;
        
        for(i = 0; i < Arr.length; i++)
        {
            while(Arr[i] != 0)
            {
                iDigit = Arr[i] % 10;
                Arr[i] = Arr[i] / 10;
                iReverse = iReverse * 10 + iDigit;
            }
            
            Arr[i] = iReverse;
            iReverse = 0;
        }

        for(i = 0; i < Arr.length; i++)
        {
           System.out.print(Arr[i]+"\t");
        }
        
    }
}

class program1
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

        MyArray mobj = new MyArray();

        mobj.RevarseArray(Arr);

        sobj.close();
    }
}