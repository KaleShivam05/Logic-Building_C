package N_Number;

public class Display
{
    public int iNo;

    public Display(int number)
    {
        this.iNo = number;
    } 

    public void CheckNumber()
    {
        if((iNo >= 0) && (iNo < 50))
        {
            System.out.println("Small");
        }
        else if((iNo >= 50) && (iNo <= 100))
        {
            System.out.println("Medium");
        }
        else
        {
            System.out.println("Large");
        }
    }

    public void ConvertNumber()
    {
        if(iNo < 0)
        {
            iNo = -iNo;
        }

        switch(iNo)
        {
            case 1: 
                    System.out.println("One");
                    break;
            case 2: 
                    System.out.println("Two");
                    break; 
            case 3: 
                    System.out.println("Three");
                    break;
            case 4: 
                    System.out.println("Four");
                    break; 
            case 5: 
                    System.out.println("Five");
                    break;
            case 6: 
                    System.out.println("Six");
                    break; 
            case 7: 
                    System.out.println("Seven");
                    break;
            case 8: 
                    System.out.println("Eight");
                    break; 
            case 9:
                    System.out.println("Nine");
                    break;
            default: 
                    System.out.println("Invalid Number");                                             
        }
    }

    public long factorial()
    {
        long iFactorial = 1;
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            iFactorial = iFactorial * iCnt;
        }

        return iFactorial;
    }

    public void DisplayTable()
    {
        int iTable = 0;
        int iCnt = 0;

        for(iCnt = 1; iCnt <= 10; iCnt++)
        {
            iTable = iCnt * iNo;
            System.out.println(iTable);
        }

    }

    public void DisplayReverseTable()
    {
        int iTable = 0;
        int iCnt = 0;

        for(iCnt = 10; iCnt >= 1; iCnt--)
        {
            iTable = iCnt * iNo;
            System.out.println(iTable);
        }

    }
}