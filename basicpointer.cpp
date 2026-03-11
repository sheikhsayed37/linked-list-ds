#include <bits/stdc++.h>
using namespace std;


void fun(int *ptr )
{
    int y=200;
    ptr=&y;
    cout<<ptr<<endl;  //ptr er value print korbe mane y er address print korbe
    cout<<"in fun"<<" "<<*ptr<<endl;
}
int main()
{
    int x=10;
    int *ptr=&x;  //pointer er maddhome x er address ke ptr e rakhlam
    fun(ptr);
    cout<<x<<endl;
    cout<<ptr<<endl;  //ptr er value print korbe mane x er address print korbe
    cout<<*ptr<<endl; //ptr er value print korbe mane x er value
    cout<<&x<<endl;  //x er address print korbe
}        
