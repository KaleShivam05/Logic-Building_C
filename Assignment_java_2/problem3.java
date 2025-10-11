/////////////////////////////////////////////////////////////////
//
// Name :          program3.java
// Discription :   Display "Hello" if input is less then 10
// Input :         integer
// Output :        String
// Author :        Shivam Rajendra Kale
// Date :          12/05/2025
//
/////////////////////////////////////////////////////////////////


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
        if(iNo1 <= 10)
        {
            System.out.println("Hello");
        }
        else
        {
            System.out.println("Demo");
        }
    }
}
class problem3
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


