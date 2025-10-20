//////////////////////////////////////////////////////////////////////////
//
// Name :          program5.java
// Discription :   use to Display Pattern
// Input :         Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          19/10/2025
//
//////////////////////////////////////////////////////////////////////////

import java.util.*;

class MyArray
{
    public void Pattern(int Arr[])
    {
        int i = 0, j = 0;
    
        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i]; j++)
            {
                System.out.print("#\t");
            }
            System.out.println();
        }

    }
}

class program5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int i = 0;

        System.out.println("Enter size of Array : ");
        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        for(i = 0; i < iSize; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        MyArray mobj = new MyArray();

        mobj.Pattern(Arr);

        sobj.close();
    }
}
