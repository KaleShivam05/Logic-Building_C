package Numbers;

public class Display
{
    public int iNo;
    public int iCnt;

    public Display(int Number)
    {
        this.iNo = Number;
        this.iCnt = 0;
    }

    public void DisplayChar()
    {
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            System.out.printf("$\t"+"*\t");
        }
    }

    public void DisplayNumber()
    {
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            System.out.printf(iCnt+"\t");
        }
    }

    public void DisplayLine()
    {
        for(iCnt = -iNo; iCnt <= iNo ; iCnt++)
        {
            System.out.printf(iCnt+"\t");
        }
    }

    public void DisplayOdd()
    {
        for(iCnt = 1; iCnt <= iNo ; iCnt++)
        {
            if((iCnt % 2) != 0)
            {
                System.out.println(iCnt);
            }
        }
    }

    public void DisplayMultiple()
    {
        for(iCnt = 1; iCnt <= (iNo * 5) ; iCnt++)
        {
            if((iCnt % iNo) == 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}