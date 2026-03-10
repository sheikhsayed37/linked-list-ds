#include <bits/stdc++.h>
using namespace std;
class Node 
{
    public:
    int val;
    Node *NEXT;
    Node (int val)
    {
        this->val=val;
        this->NEXT=NULL;
    }
};
int main()
{
    Node *head =new Node(10);
    Node *a=new Node(20);
    Node *b=new Node(30);
    Node *c=new Node(40);
    head->NEXT=a;
    a->NEXT=b;
    b->NEXT=c;
    Node *temp=head;

while(temp!=NULL)
{
    cout<<temp->val<<endl;
    temp=temp->NEXT;
}

}