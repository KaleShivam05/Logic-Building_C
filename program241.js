/////////////////////////////////////////////////////////////////
//
//  File name :     program241.js
//  Descreption :   Count Digits
//  Author :        Shivam Rajendra Kale
//  Date :          08/08/2025
//
//////////////////////////////////////////////////////////////////
 

function SumDigits(No)
{
    let iSum = 0
    let iDigit = 0

    while(No != 0)
    {
        iDigit = No % 10
        iSum = iSum + iDigit
        No = Math.floor(No / 10)
    }
    return iSum
}

let Value = 123
let iRet = 0

iRet = SumDigits(Value)

console.log("Summation of digits are : "+iRet)