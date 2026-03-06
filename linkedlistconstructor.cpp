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
     Node *a=new Node(10);    //pointer use korahoi jeno memory teke konokico moce na jai
      Node *b=new Node(10);
       Node *c=new Node(10);
       a->next=b;
       b->next=c;
       cout<<a->val<<endl;
       cout<<a->next->val<<endl;
  cout<<a->next->next->val<<endl;
}