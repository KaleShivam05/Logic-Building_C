/////////////////////////////////////////////////////////////////
//
//  File name :     program22.java
//  Descreption :   Display count of Even digit form number
//  Input :         Integer
//  Output :        Integer
//  Author :        Shivam Rajendra Kale
//  Date :          10/07/2025
//
//////////////////////////////////////////////////////////////////

/*
    Start
        Accept number from user
            Display count of Even digit form number
    Stop
*/


import java.util.*;

class Digits
{
    public int CountEven(int iNo)
    {
        int iDigit = 0 , iCnt = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if((iDigit % 2) == 0)
            {
                iCnt++;
            }
            iNo = iNo / 10;
        }
        return iCnt;
    }
}

class program22
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int iValue = sobj.nextInt();

        Digits dobj = new Digits();

        int iRet = dobj.CountEven(iValue);

        System.out.println("Number of even digits are : "+iRet);
    }
}
