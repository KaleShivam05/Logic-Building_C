/////////////////////////////////////////////////////////////////
//
// Name :          program1.c
// Discription :   Calculate Circle Area
// Input :         Integer
// Output :        Integer, String 
// Author :        Shivam Rajendra Kale
// Date :          19/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept Radius from user
          Desplay its area
    Stop                  
*/

#include<stdio.h>

float CircleArea(float fRadius)
{
   const float IP = 3.14f;
   float fArea = 0.0f;

   fArea = IP * fRadius * fRadius;      //logic

   return fArea; 
}

int main()
{
    float fValue = 0.0f;
    float fRet = 0.0f;

    printf("Enter Radius :");
    scanf("%f",&fValue);

    fRet =  CircleArea(fValue);   //function call

    printf("Area of Circle is :%.2f",fRet);

    return 0;
}