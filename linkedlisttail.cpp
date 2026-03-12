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
void insert_at_tail(Node *&head,int val)
{
    
    Node *newnode =new Node(val);
    
         Node *temp =head;
         while(temp->next!=NULL)
        {
             temp=temp->next;
        }   
     temp->next=newnode;
    
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
        Node *b=new Node(1009);
        Node *c=new Node(10909);
            head->next=a;
            a->next=b;
            b->next=c;
        insert_at_tail(head,100);
        insert_at_tail(head,200);
        insert_at_tail(head,200);
        print_linkedlist_output(head);      
         
}