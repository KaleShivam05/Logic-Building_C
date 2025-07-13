/////////////////////////////////////////////////////////////////
//
//  File name :     program48.java
//  Descreption :   string to Array
//  Input :         String
//  Output :        String
//  Author :        Shivam Rajendra Kale
//  Date :          12/07/2025
//
//////////////////////////////////////////////////////////////////


import java.util.*;

class program48
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt = 0;

        System.out.println("Enter String : ");
        String name = sobj.nextLine();

        char Arr[] = name.toCharArray();

        System.out.println(Arr);

        System.out.println(Arr.length);
    }
}