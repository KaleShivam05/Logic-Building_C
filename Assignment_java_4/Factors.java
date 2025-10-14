package Problem_OnFactors;

public class Factors 
{
    public int iNo;
    public int iCnt; 

    public Factors(int A)
    {
        this.iNo = A;
        this.iCnt = 0;
    }

    public int factorsMultiplication()
    {
        int iMultiplication = 1;

        for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                iMultiplication = iMultiplication * iCnt;
            }
        }
        return iMultiplication;
    }

    public void factorsDecreasing()
    {
        for(iCnt = (iNo /2); iCnt >= 1; iCnt--)
        {
            if((iNo % iCnt) == 0)
            {
                System.out.println(iCnt);
            }
        }
    }

    public void Nonfactors()
    {
        for(iCnt = 1; iCnt < iNo; iCnt++)
        {
            if((iNo % iCnt) != 0)
            {
                System.out.println(iCnt);
            }
        }
    }

    public int NonFactorsSummation()
    {
        int iSummation = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if((iNo % iCnt != 0))
            {
                iSummation = iSummation + iCnt;
            }
        }
        return iSummation;
    }

    public int DiffFactorsSummation()
    {
        int iNonFactorsSummation = 0;
        int iFactorsSummation = 0;
        int iDifference = 0;

        for(iCnt = 1; iCnt < iNo; iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                iFactorsSummation = iFactorsSummation + iCnt;
            }
            else
            {
                iNonFactorsSummation = iNonFactorsSummation + iCnt;
            }
        }

        iDifference = iFactorsSummation - iNonFactorsSummation;
        return iDifference;
    }
}
