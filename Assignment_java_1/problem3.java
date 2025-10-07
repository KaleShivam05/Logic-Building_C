/////////////////////////////////////////////////////////////////
//
// Name :          problem3.java
// Discription :   Display 5 to 1 numbers
// Input :         integer
// Output :        integer
// Author :        Shivam Rajendra Kale
// Date :          05/06/2025
//
/////////////////////////////////////////////////////////////////

class DisplayX
{
    public int iCnt = 0;

    public void Display()
    {
        iCnt = 5;

        while(iCnt >= 1)
        {
            System.out.println(iCnt);
            iCnt--;
        }
    }
}

class problem3
{
    public static void main(String A[])
    {
        DisplayX dobj = new DisplayX();

        dobj.Display();
    }
}