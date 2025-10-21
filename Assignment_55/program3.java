//////////////////////////////////////////////////////////////////////////
//
// Name :          program3.java
// Discription :   use to count freaquence of any character
// Input :         Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          20/10/2025
//
//////////////////////////////////////////////////////////////////////////

import java.util.*;

class MyArray
{
    public int Search(char Arr[], char Character)
    {
        int i = 0, Count = 0;
        char Ch1 = '\0', Ch2 = '\0';
    
        for(i = 0; i < Arr.length; i++)
        {
            Ch1 = Arr[i];
            Ch2 = Arr[i];

            if((Arr[i] == Character) || (Character == (Ch1 += 32)) || (Character == (Ch2 -= 32)))
            {
                Count++;
            }
        }

        return Count;
    }
}

class program3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int i = 0, iRet = 0;

        System.out.println("Enter Array of Characters : ");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        //sobj.nextLine();

        System.out.println("Enter Characters that you want to search : ");
        char Character = sobj.next().charAt(0);

        MyArray mobj = new MyArray();

        iRet = mobj.Search(Arr, Character);
        System.out.println("Frequence of "+Character+" is : "+iRet);

        sobj.close();
    }

}
