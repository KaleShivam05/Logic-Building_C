//////////////////////////////////////////////////////////////////////////
//
// Name :          program3.java
// Discription :   use to Count capital characters from Array 
// Input :         Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          18/10/2025
//
//////////////////////////////////////////////////////////////////////////

import java.util.*;

class MyArray
{
    public void RevarseArray(char Arr[])
    {
        int i = 0;
        int iCapCount = 0, iSmallCount = 0;
        
        for(i = 0; i < Arr.length; i++)
        {
           if(Arr[i] >= 'A' && Arr[i] <= 'Z')
           {
                iCapCount++;
           }
        }

        System.out.println("Capital characters are : "+iCapCount);
        
    }
}

class program3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int i = 0;

        System.out.println("Enter Array of Characters : ");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        MyArray mobj = new MyArray();

        mobj.RevarseArray(Arr);

        sobj.close();
    }
}