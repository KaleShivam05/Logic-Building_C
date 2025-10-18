//////////////////////////////////////////////////////////////////////////
//
// Name :          program5.java
// Discription :   Check wether Array is Pallindrome or not
// Input :         Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          17/10/2025
//
//////////////////////////////////////////////////////////////////////////

import java.util.*;

class MyArray
{
    public boolean ChkPallindrome(int Arr[])
    {
        int i = 0, j = 0;
        boolean bFlag = true;
        
        for(i = 0, j = (Arr.length - 1); i <= j; i++, j--)
        {
            if(Arr[i] != Arr[j])
            {
                bFlag = false;
                return bFlag;
            }
        }

        return bFlag;
    }
}

class program5
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

        boolean bRet = mobj.ChkPallindrome(Arr);

        if(bRet == true)
        {
            System.out.println("Array is Pallndrome ");
        }
        else 
        {
            System.out.println("Array is not Pallndrome ");
        }

        sobj.close();
    }
}