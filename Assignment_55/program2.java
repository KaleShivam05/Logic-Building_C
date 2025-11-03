//////////////////////////////////////////////////////////////////////////
//
// Name :          program2.java
// Discription :   use to count vowels character
// Input :         Integer
// Output :        Integer, String
// Author :        Shivam Rajendra Kale
// Date :          19/10/2025
//
//////////////////////////////////////////////////////////////////////////

import java.util.*;

class MyArray
{
    public int ArrayCountVowels(char Arr[])
    {
        int i = 0, Count = 0;
    
        for(i = 0; i < Arr.length; i++)
        {
           if(Arr[i] == 'A' || Arr[i] == 'E' || Arr[i] == 'I' || Arr[i] == 'O' || Arr[i] == 'U' || 
              Arr[i] == 'a' || Arr[i] == 'e' || Arr[i] == 'i' || Arr[i] == 'o' || Arr[i] == 'u')
           {
                Count++;
           }
        }
        return Count;
    }
}

class program2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int i = 0, iRet = 0;

        System.out.println("Enter Array of Characters : ");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        MyArray mobj = new MyArray();

        iRet = mobj.ArrayCountVowels(Arr);
        System.out.println("Vowels are : "+iRet);

        sobj.close();
    }

}
