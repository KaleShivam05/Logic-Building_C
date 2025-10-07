/////////////////////////////////////////////////////////////////
//
// Name :          problem1.java
// Discription :   Display 5 times "Jay Ganesh"
// Input :         integer
// Output :        String
// Author :        Shivam Rajendra Kale
// Date :          05/06/2025
//
/////////////////////////////////////////////////////////////////

class DisplayX
{
    public int iCnt;

    public void Display()
    {
        for(iCnt = 1; iCnt <= 5; iCnt++)
        {
            System.out.println("Jay Ganesh...");
        }
    }
    
}
class problem2
{
    public static void main(String A[])
    {
        DisplayX dobj = new DisplayX();

        dobj.Display();
    }
}