#include <bits/stdc++.h>
using namespace std;
void fun(int *&p) //p er reference pass korlam mane p er address pass korlam
{
    p=NULL;

}
int main()

{
    int x=10;
    int *p=&x;
    fun(p);
    cout<<"in main "<<p<<endl;
    
}