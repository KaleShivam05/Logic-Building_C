/////////////////////////////////////////////////////////////////
//
//  File name :     program58.java
//  Descreption :   Count even elements from array
//  Input :         Integer
//  Output :        Integer
//  Author :        Shivam Rajendra Kale
//  Date :          13/07/2025
//
//////////////////////////////////////////////////////////////////

/*
    Start
        Accept input from user
            Display count Even elements of aaray
    Stop
*/

import java.util.Scanner;

class NNumberX
{
    public int CountEven(int Arr[])
    {
        int iCoumt = 0, iCnt = 0;
        
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 2) == 0)
            {
                iCoumt++;
            }
        }

        return iCoumt;
    }
}

class program58
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements : ");
        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        int iCnt = 0;

        System.out.println("Enter the elements : ");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        System.out.println("Elements of the array are : ");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }

        NNumberX nobj = new NNumberX();

        int iRet = 0;

        iRet = nobj.CountEven(Arr);

        System.out.println("Number of even elements are : "+iRet);
        
        Arr = null;
        sobj = null;
    }
}