package NNumbers;

public class Display
{
    public int iNo;
    public int iCnt;

    public Display(int iNumber)
    {
        this.iNo = iNumber;
        this.iCnt = 0;
    }

    public void DisplayPattern()
    {
        for(iCnt = 1; iCnt <= (iNo * 2); iCnt++)
        {
            if(iCnt <= iNo)
            {
                System.out.printf("*\t");
            }
            else
            {
                System.out.printf("#\t");
            }
            
        }
    }

    public int DollarToINR()
    {
        int iDoller = 70;
        int iINR = 0;

        iINR = iDoller * iNo;

        return iINR;   
    }

    public int MultiplicationOfEvenFactorial()
    {
        int iMultiplication = 1;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if((iCnt % 2) == 0)
            {
                iMultiplication = iMultiplication * iCnt;
            }
        }
        return iMultiplication;
    }

    public int MultiplicationOfOddFactorial()
    {
        int iMultiplication = 1;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if((iCnt % 2) != 0)
            {
                iMultiplication = iMultiplication * iCnt;
            }
        }
        return iMultiplication;
    }

    public int DifferenceBetnFactorial()
    {
        int iMultiplication1 = 1;
        int iMultiplication2 = 1; 
        int iDiffrence = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if((iCnt % 2) == 0)
            {
                iMultiplication1 = iMultiplication1 * iCnt;
            }
            else
            {
                iMultiplication2 = iMultiplication2 * iCnt;
            }
        }

        iDiffrence = iMultiplication1 - iMultiplication2;

        return iDiffrence;
    }
}