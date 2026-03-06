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
        this->next=NULL;  // age tekei null kore
    }
};
int main()
{
    Node *head=new Node(20);    //pointer use korahoi jeno memory teke konokico moce na jai
     Node *a=new Node(10);
     Node *b=new Node(1000);
     head->next=a;
     a->next=b;
     Node *temp=head;
     while(temp!=NULL)
     {
       cout<<temp->val<<endl; // temp er value print korbe

        temp=temp->next;             // temp er next a jabe mane next er value print korbe
     }
}
