/////////////////////////////////////////////////////////////////
//
// Name :          problem1.java
// Discription :   Display numbers of * on screen
// Input :         integer
// Output :        String
// Author :        Shivam Rajendra Kale
// Date :          06/06/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept Number from User
            Display number of * on screen
          
    Stop         
*/

import java.util.Scanner;

class Display
{
    public int iCnt;
    public int iNo1;

    public Display(int iNo1)
    {
        this.iNo1 = iNo1;
        this.iCnt = 1;
    }

    public void DisplayX()
    {
        if(iNo1 < 0)    //Updator
        {
            iNo1 = -iNo1;
        }

        while(iCnt <= iNo1)
        {
            System.out.println("*");
            iCnt++;
        }
    }
}
class problem1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        int iValue = sobj.nextInt();

        Display dobj = new Display(iValue);

        dobj.DisplayX();
    }

}

