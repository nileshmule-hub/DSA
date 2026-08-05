#include <iostream>
using namespacestd;

struct node
{
    int data;
    node*next;
    node
};

class linkedlist
{
private:
    node *head;
public:
    linkedlist()
    {
        head=null;
    }
    void createlist()
    {
        int n, value;
        cout<<"\nEnter number of nodes:";
        cin>>n;
        if (n<=0)
        {
            cout <<"invalid number of nodes.";
            return;
        }
        for (int i=1;i<=n;i++)
        {
            cout<<"Enter value "<<i<<":";
            cin >>value;
            insertEnd (value);
        }
        cout<<"\nLinkedlist created successfully.\n";
    }
    void insertEnd(int value)
    {
        node *newnode=new node;
        newnode->data=value;
        newnode->next=null;
        if (head==null)
        {
            head=newnode;
            return;
           
        }
        node*temp=head;
        while(temp->next!=null)
        {
            temp=temp->next;
        }
        temp->next =newNode;
    }
    void deleteNode(int value)
    {
        if(head==Null)
        {
            cout<<"\nlist is empty.\n";
            return;
        }
        node*temp=head;
        node*previous=null;
        if (head >data ==value)
        {
            head =head->next;
            delet temp;
           
            cout<<"\nNode Deleted.\n";
            return;
        }
        while(temp!=null&& temp->data!=value)
        {
            previous =temp;
            temp=temp->next;
        }
        if (temp ==null)
        {
            cout<<"\nValue Not found.\n";
            return
        }
        previous ->next=temp->next ;
        delet temp;
        cout<<"\nNode Deleted  Successfully.\n";
       
    }
    void display()
    {
        if(head==null)
        {
            cout<<"\Linkedlist is empty.\n";
            return;
        }
        node *temp=head;
        cout<<"\nLinked list:";
        while(temp!=null)
        {
            cout <<temp-> data<<"->";
            temp=temp->next;
        }
        cout <<"null"<<endl;
    }
};
int main()
{
    Linkelist list;
   
    int choice;
    int value;
   
    do
    {
        cout<<"\n===============================";
        cout<<"\n linkedlist menu";
        cout<<"\n===============================";
        cout<<"\n1.Crate list";
        cout<<"\n2.insert node";
        cout<<"\n3.delete node";
        cout<<"\n4.display node";
        cout<<"\n5.insert biginning";
        cout<<"\n6.exit";
     cout<<"\nEnter Choice : ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                list.createList();
                break;

            case 2:
                cout<<"\nEnter value to insert : ";
                cin>>value;

                list.insertEnd(value);

                cout<<"\nNode Inserted.";
                break;

            case 3:
                cout<<"\nEnter value to delete : ";
                cin>>value;

                list.deleteNode(value);
                break;

            case 4:
                list.display();
                break;
                
            case 5:
                cout<<"\nEnter value to insert : ";
                cin>>value;
                list.insertBeginning(value);
                break;


            case 6:
                cout<<"\nProgram Ended.";
                break;

            default:
                cout<<"\nInvalid Choice.";
        }

    }while(choice!=5);

    return 0;
}
    
