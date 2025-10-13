package N_Numbers;

public class Display
{
    public int iCnt;

    public Display()
    {
        iCnt = 0;
    }

    public void DisplayEven(int iArr[],int iLength)
    {
       System.out.println("Even numbers are :");

       for(iCnt = 0; iCnt < iLength; iCnt++)
       {
          if((iArr[iCnt] % 2) == 0) //logic
          {
              System.out.println(iArr[iCnt]);
          }
       }
    }

    public void DisplayFactors(int iNo)
    {
        System.out.println("Factors are :");

        for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                System.out.println(iCnt);
            }
        }
    }

    public void DisplayEvenFactors(int iNo)
    {
        System.out.println("Even factors are :");
        int iCount = 0;

        for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            { 
                if((iCnt % 2) == 0)
                {
                    iCount++;
                    System.out.println(iCnt);
                }    
            }
        }
        if(0 == iCount)
        {
          System.out.println(iNo+" has no even factros");
        }
    }

    public boolean CheckVowel(char Ch)
    {
        if((Ch == 'A') || (Ch == 'E') || (Ch == 'I') || (Ch == 'O') ||(Ch == 'U') || 
           (Ch == 'a') || (Ch == 'e') || (Ch == 'i') || (Ch == 'o') || (Ch == 'u'))
        {
           return true;
        }
        else
        {
            return false;
        }
    }

}