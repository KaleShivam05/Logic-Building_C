/////////////////////////////////////////////////////////////////
//
//  File name :     program197.java
//  Descreption :   Create a Stack
//  Author :        Shivam Rajendra Kale
//  Date :          30/07/2025
//
//////////////////////////////////////////////////////////////////

// Stack

// | 11 |->| 21 |->| 51 |->| 101 |-> 


class node
{
    public int data;
    public node next;
}

class StackX
{
    private node first;
    private int iCount;

    public StackX()
    {
        this.first = null;
        this.iCount = 0;
    }

    public void push(int no)    //InsertFirst
    {
        node newn = new node();

        newn.data = no;
        newn.next = null;

        newn.next = first;
        first = newn;

        iCount++;
    }

    public int pop()           //DeleteFirst
    {
        node temp = first;
    
        if(this.first == null)  // Stack empty
        {
            System.out.println("Unable to pop as stack is empty");
            return -1;
        }
        else
        {
            first = first.next;
            iCount--;
            return temp.data;  
        }
    }

    public void Display()
    {
        node temp = null;

        temp = this.first;

        while(temp != null)
        {
            System.out.println("| "+temp.data+" |");
            temp = temp.next;
        }
    }

    public int Count()
    {
        return iCount;
    }
}

class program197
{
    public static void main(String A[])
    {
        StackX sobj = new StackX();
        int iRet = 0;

        sobj.push(10);
        sobj.push(20);
        sobj.push(30);
        sobj.push(40);
        sobj.push(50);

        sobj.Display();

        iRet = sobj.Count();
        System.out.println("Number of elements in the stack are : "+iRet);

        iRet = sobj.pop();
        System.out.println("Poped element from stak is : "+iRet);

        iRet = sobj.pop();
        System.out.println("Poped element from stak is : "+iRet);
        
        iRet = sobj.pop();
        System.out.println("Poped element from stak is : "+iRet);
        
        sobj.Display();

        iRet = sobj.Count();
        System.out.println("Number of elements in the stack are : "+iRet);
    }
}