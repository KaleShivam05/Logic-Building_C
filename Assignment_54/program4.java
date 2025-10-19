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

        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] < 35)
            {
                System.out.println(Arr[i]+" Fail");
            }
            else if(Arr[i] < 50 && Arr[i] >= 35)
            {
                System.out.println(Arr[i]+" Pass class");
            }
            else if(Arr[i] < 60 && Arr[i] >= 50)
            {
                System.out.println(Arr[i]+" Second class");
            }
            else if(Arr[i] < 70 && Arr[i] >= 60)
            {
                System.out.println(Arr[i]+" first class");
            }
            else if(Arr[i] >= 70 && Arr[i] < 101)
            {
                System.out.println(Arr[i]+" First class with Distinction");
            }
            else 
            {
                System.out.println(Arr[i]+" Invalid Marks");
            }
        }
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
