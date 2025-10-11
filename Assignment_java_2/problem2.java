/////////////////////////////////////////////////////////////////
//
// Name :          program2.java
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
    public int iNo1;

    public Display(int iNo1)
    {
        this.iNo1 = iNo1;
    }

    public void DisplayX()
    {
        if(iNo1 < 0)    //Updator
        {
            iNo1 = -iNo1;
        }

        while(iNo1 >= 1)
        {
            System.out.println("*");
            iNo1--;
        }
    }
}
class problem2
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


