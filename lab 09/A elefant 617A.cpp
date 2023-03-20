#include<iostream>
using namespace std;
int main()
{
    int i,x,m;
    cin>>x;
    if(x%5==0)
    {
        m=x/5;
        cout<<m;
    }
    else
    {
        m=x/5+1;
        cout<<m;
    }

}
