/////////////////////////////////////////////////////////////////
//
//  File name :     program239.js
//  Descreption :   Check perfect number
//  Author :        Shivam Rajendra Kale
//  Date :          07/08/2025
//
//////////////////////////////////////////////////////////////////
 

function CheckPerfect(No)
{
    let iSum = 0

    for(let i = 1; i<= (No/2); i++)
    {
        if(No % i == 0)
        {
            iSum = iSum + i
        }
    }

    if(iSum == No)
    {
        return true;
    }
    else
    {
        return false;
    }
}

let Value = 28
let bRet = false

bRet = CheckPerfect(Value)

if(bRet == true)
{
    console.log(Value+" is a perfect number")
}
else
{
    console.log(Value+" is not a perfect number")
}