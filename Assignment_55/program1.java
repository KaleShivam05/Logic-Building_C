//////////////////////////////////////////////////////////////////////////
//
// Name :          program1.java
// Discription :   use to replace capital character with small character
// Input :         Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          19/10/2025
//
//////////////////////////////////////////////////////////////////////////

import java.util.*;

class MyArray
{
    public void ReplaceArray(char Arr[])
    {
        int i = 0;
    
        for(i = 0; i < Arr.length; i++)
        {
           if(Arr[i] >= 'A' && Arr[i] <= 'Z')
           {
                Arr[i] += 32;
           }
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

        System.out.println("Enter Array of Characters : ");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        MyArray mobj = new MyArray();

        mobj.ReplaceArray(Arr);

        sobj.close();
    }
}