/////////////////////////////////////////////////////////////////
//
//  File name :     program192.java
//  Descreption :   Create a Linked list
//  Author :        Shivam Rajendra Kale
//  Date :          29/07/2025
//
//////////////////////////////////////////////////////////////////

// Singly Linear Linked List

// | 11 |->| 21 |->| 51 |->| 101 |-> 


class node
{
    public int data;
    public node next;
}

class SinglyLL
{
    private node first;
    private int iCount;

    public SinglyLL()
    {
        System.out.println("Inside constructor");
        first = null;
        iCount = 0;
    }

    public void InsertFirst(int no)
    {
        node newn = null;

        newn = new node();

        newn.data = no;
        newn.next = null;

        if(first == null)   // LL is empty
        {
            first = newn;
        }
        else    // LL contains atleast 1 node
        {
            newn.next = first;
            first = newn;
        }
        iCount++;
    }

     public void InsertLast(int no)
    {
        node newn = null;
        node temp = null;

        newn = new node();

        newn.data = no;
        newn.next = null;

        if(first == null)   // LL is empty
        {
            first = newn;
        }
        else    // LL contains atleast 1 node
        {
            temp = first;

            while(temp.next != null)
            {
                temp = temp.next;
            }

            temp.next = newn;
        }
        iCount++;
    }

    public void Display()
    {
        node temp = null;

        temp = first;

        while(temp != null)
        {
            System.out.print("| "+temp.data+" |-> ");
            temp = temp.next;
        }

        System.out.println("null");
    }

    public int Count()
    {
        return iCount;
    }

    public void DeleteFirst()
    {
      if(first == null)         // LL is empty
      {
        return;
      } 
      else if(first.next == null)   // LL contains 1 node
      {
        first = null;
      } 
      else      // LL contains more than 1 node
      {
        first = first.next;
      }
      iCount--;
    }

    public void DeleteLast()
    {
        node temp = null;

        if(first == null)         // LL is empty
      {
        return;
      } 
      else if(first.next == null)   // LL contains 1 node
      {
        first = null;
      } 
      else      // LL contains more than 1 node
      {
            temp = first;

            while(temp.next.next != null)
            {
                temp = temp.next;
            }

            temp.next = null;
      }
      iCount--;
    }
}

class program192
{
    public static void main(String A[])
    {
        SinglyLL sobj = new SinglyLL();
        int iRet = 0;

        sobj.InsertFirst(51);
        sobj.InsertFirst(21);
        sobj.InsertFirst(11);

        sobj.InsertLast(101);
        sobj.InsertLast(111);        
        sobj.InsertLast(121);

        sobj.Display();
    
        iRet = sobj.Count();

        System.out.println("Number of elements in the LinkedList are : "+iRet);

        sobj.DeleteFirst();

        sobj.Display();
    
        iRet = sobj.Count();

        System.out.println("Number of elements in the LinkedList are : "+iRet);

        sobj.DeleteLast();
    
        sobj.Display();
    
        iRet = sobj.Count();

        System.out.println("Number of elements in the LinkedList are : "+iRet);

    }
}
