/////////////////////////////////////////////////////////////////
//
// Name :          problem1.java
// Discription :   Display Division of two numbers
// Input :         integer
// Output :        integer , String
// Author :        Shivam Rajendra Kale
// Date :          05/06/2025
//
/////////////////////////////////////////////////////////////////


class Divide
{
    public int iNo1;
    public int iNo2;

    public Divide(int iNo1, int iNo2)
    {
        this.iNo1 = iNo1;
        this.iNo2 = iNo2;
    }

    public int Division()
    {
        int iAns = 0;

        if(iNo2 > iNo1)
        {
            return -1;
        }

        iAns = iNo1 / iNo2;

        return iAns;
    }
}

class problem1
{
    public static void main(String A[])
    {
        int iValue1 = 15, iValue2 = 5, iRet = 0;

        Divide dobj = new Divide(iValue1,iValue2);

        iRet = dobj.Division();

        System.out.println("Division is :"+iRet);

    }
}