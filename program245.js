/////////////////////////////////////////////////////////////////
//
//  File name :     program245.js
//  Descreption :   function call to another function
//  Author :        Shivam Rajendra Kale
//  Date :          08/08/2025
//
//////////////////////////////////////////////////////////////////


function Addition(No1, No2)
{
    return No1 + No2
}

function Demo()
{
    return Addition
}

let ret = Demo()

let Ans = 0

Ans = ret(10,11)

console.log(Ans)