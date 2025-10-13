/////////////////////////////////////////////////////////////////
//
// Name :          problem1.java
// Discription :   Display even numbers on screen
// Input :         integer
// Output :        integer
// Author :        Shivam Rajendra Kale
// Date :          o7/06/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
      Accept Number from User
        Check even numbers then
           Display even numbers
    Stop         
*/

import java.util.Scanner;
import N_Numbers.Display; //User define package

class problem1
{
   public static void main(String A[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter numbers of elements :");
      int iSize = sobj.nextInt();

      int iCnt = 0;
      int Arr[] = new int[iSize]; //Memory alloction

      System.out.println("Enter elements :");
      //Input elements
      for(iCnt = 0; iCnt < iSize; iCnt++)
      {
          Arr[iCnt] = sobj.nextInt();
      }

      //Create object of Display class
      Display dobj = new Display(); 

      dobj.DisplayEven(Arr,iSize); // function call

      sobj.close(); //resource close
   }
}