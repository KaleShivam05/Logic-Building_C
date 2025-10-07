/////////////////////////////////////////////////////////////////
//
// Name :          program5.java
// Discription :   Display numbers of *
// Input :         integer
// Output :        integer , String
// Author :        Shivam Rajendra Kale
// Date :          05/06/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
       Accept input fron user 
        Display numbers of * on screen 
    Stop         
*/

import java.util.Scanner;

class DisplayX
{
    public int iNo1;
    public int iCnt;

    public DisplayX(int iNo1)
    {
        this.iNo1 = iNo1;
        this.iCnt = 0;
    }

    public void Display()
    {
         for(iCnt = 1; iCnt <= iNo1; iCnt++)
        {
            System.out.println("*");
        }
    }
}

class problem5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enetr number :");
        int iValue = sobj.nextInt();

        DisplayX dobj = new DisplayX(iValue);

        dobj.Display();

    }
}
