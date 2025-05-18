/////////////////////////////////////////////////////////////////
//
// Name :          program2.c
// Discription :   Calculate Area of rectangle
// Input :         Integer
// Output :        Integer, String 
// Author :        Shivam Rajendra Kale
// Date :          19/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept width & height from user
            Calculate area than 
            Display
    Stop                  
*/

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0f;

    dArea = fWidth * fHeight;               //logic

    return dArea;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter width :");
    scanf("%f",&fValue1);

    printf("Enter height :");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);     //function call

    printf("The area of rectangle is :%f",dRet);

    return 0;
}

