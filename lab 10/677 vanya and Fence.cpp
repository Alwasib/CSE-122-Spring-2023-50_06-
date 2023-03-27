#include<iostream>
using namespace std;
int main()
{
    int n,h,i,a,c=0,m,s;
    cin>>n>>h;
    for(i=1;i<=n;i++)
    {
       cin>>a;

    if(a%h==0)
    {
       c=c+(a/h);
    }
    else
    {
       c=c+(a/h)+1;
    }
     }
     cout<<c;

}
