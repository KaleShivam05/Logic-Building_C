//////////////////////////////////////////////////////////////////////////
//
// Name :          program4.java
// Discription :   use to Display class of each student
// Input :         Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          18/10/2025
//
//////////////////////////////////////////////////////////////////////////

import java.util.*;

class MyArray
{
    public void RevarseArray(float Arr[])
    {
        int i = 0;

        // code
    }
}

class program4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int i = 0;

        System.out.println("Enter isze of first Array : ");
        int iSize = sobj.nextInt();

        float Marks[] = new float [iSize];

        System.out.println("Enter elements : ");
        for(i = 0; i < iSize; i++)
        {
            Marks[i] = sobj.nextFloat();
        }

        MyArray mobj = new MyArray();

        mobj.RevarseArray(Marks);

        sobj.close();
    }
}