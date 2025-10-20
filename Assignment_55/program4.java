//////////////////////////////////////////////////////////////////////////
//
// Name :          program4.java
// Discription :   use to Display Diff of small & capital characters
// Input :         Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          19/10/2025
//
//////////////////////////////////////////////////////////////////////////

import java.util.*;

class MyArray
{
    public int Search(char Arr[])
    {
        int i = 0, Count1 = 0, Count2 = 0;
    
        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] >= 'A' && Arr[i] <= 'Z')
            {
                Count1++;
            }
            if(Arr[i] >= 'a' && Arr[i] <= 'z')
            {
                Count2++;
            }
        }

        return Count1 - Count2;
    }
}

class program4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int i = 0, iRet = 0;

        System.out.println("Enter Array of Characters : ");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        MyArray mobj = new MyArray();

        iRet = mobj.Search(Arr);
        System.out.println("Frequence of is : "+iRet);

        sobj.close();
    }
}