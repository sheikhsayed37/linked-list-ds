#include <bits/stdc++.h>
using namespace std;
class Node
{
    public :
    int val;
    Node *next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void insert_at_tail(Node *&head,Node *&tail,int val)
{
    Node *newnode =new Node(val);
    
         Node *temp =head;
         if(head==NULL)   // ata ager tail code e  add kora jaito bt kora hoi nai projon e lage nai akn o na korle pera nai
         {                  // moloto 
           head =newnode;    //update or optimized version of tail 
           return;
         }
     tail->next=newnode;
     tail=tail->next;
    
}
   void print_linkedlist_output(Node *head)
                                                //just arekta fun create kore sekane print korsi
    {
         Node *temp =head;
         while(temp!=NULL)
        {
            cout<<temp->val<<endl;
            temp=temp->next;
        }   
        }
int main()
{
        Node *head=new Node(10);
        Node *a=new Node(100);
        Node *tail=new Node(1009);
 
            head->next=a;
            a->next=tail;
            
        insert_at_tail(head,tail,100);
        
        print_linkedlist_output(head);      
         
}
//sayed45@$&12

