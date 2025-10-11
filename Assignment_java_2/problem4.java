/////////////////////////////////////////////////////////////////////
//
// Name :          program4.java
// Discription :   Display frist number in second numbers of time
// Input :         integer
// Output :        integer , String
// Author :        Shivam Rajendra Kale
// Date :          12/05/2025
//
//////////////////////////////////////////////////////////////////////

/*
    Start
        Accept two Number from User
          Display frist number in second number of time  
    Stop         
*/

import java.util.Scanner;

class Display
{
    public int iNo1;
    public int iFrequency;
    public int iCnt;

    public Display(int iNo1, int iFrequency)
    {
        this.iNo1 = iNo1;
        this.iFrequency = iFrequency;
        this.iCnt = 0;
    }

    public void DisplayX()
    {
        if(iFrequency < 0)     //Updator
        {
            iFrequency = -iFrequency;
        }

        for(iCnt = 1; iCnt <= iFrequency; iCnt++)
        {
            System.out.println(iNo1);
        }
    }
}
class problem4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter Frequency :");
        int iValue2 = sobj.nextInt();

        Display dobj = new Display(iValue1,iValue2);

        dobj.DisplayX();
    }

}


