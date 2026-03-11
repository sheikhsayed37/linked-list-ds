#include <bits/stdc++.h>
using namespace std;
void fun(int *&ptr )//ptr er reference pass korlam mane ptr er address pass korlam
{
    ptr=NULL;
}
int main()
{
    int x=10;
    int *ptr=&x;  //pointer er maddhome x er address ke ptr e rakhlam
    fun(ptr);
    cout<<x<<endl;
    cout<<ptr<<endl;
          
}