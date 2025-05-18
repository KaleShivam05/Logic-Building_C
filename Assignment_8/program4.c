/////////////////////////////////////////////////////////////////
//
// Name :          program4.c
// Discription :   Convert Fahrenheit into Celsis 
// Input :         Integer
// Output :        Integer, String
// Author :        Shivam Rajendra Kale
// Date :          19/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept input from user
            Convert Fahrenheit into Celsis
                Display        
    Stop                  
*/

#include<stdio.h>

double FhtoCs(int iFahrenheit)
{
    double iCelsius = 0.0;

    iCelsius = ((double)iFahrenheit - 32.00) * (5.00 / 9.00);    //logic

    return iCelsius;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0f;

    printf("Enter temperature in fahrenheit :");
    scanf("%d",&iValue);

    dRet = FhtoCs(iValue);   //function call

    printf("Temperature in Celsius :%lf",dRet);
    
    return 0;
}