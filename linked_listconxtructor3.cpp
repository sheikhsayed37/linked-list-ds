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
int main()
{
     Node *head=new Node(10);    //pointer use korahoi jeno memory teke konokico moce na jai
     Node *a=new Node(10);
     Node *b=new Node(1000);
     head->next=a;
     a->next=b;
     while(head!=NULL)       //করার কারণে original head pointer হারিয়ে যায়।
     {
         cout<<head->val<<endl;
         head=head->next;
     }
}
