#include <bits/stdc++.h>
using namespace std;
class Node
{
  public:
  int val;
  Node *next;
   Node(int val)
   {
    this->val=val;
    this->next=NULL;
   }
};
   void val_insertion_at_anypos(Node *&head,int indx,int val)
   {
    Node *newnode=new Node(val);
    Node *temp=head;
    for(int i=0;i<indx-1;i++)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    
   }
  void print_linkedlist(Node *head)
   {
       Node *temp=head;
       while(temp!=NULL)
       {
        cout<<temp->val<<endl;
        temp=temp->next;
       }
   }
int main()
{
    Node *head=new Node(10);
     Node *a=new Node(15);
      Node *b=new Node(19);
      head->next=a;
      a->next=b;
      val_insertion_at_anypos(head,2,100);  
       val_insertion_at_anypos(head,2,400); 
      print_linkedlist(head);
}