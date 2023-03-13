#include<iostream>
using namespace std;
int main()
{
    int w,k,i,n,f=0,l;
    cin>>w>>k>>n;
    for(i=1;i<=n;i++)
    {
      f=f+w*i;
    }
    l=f-k;
    if(l>0)
    {
        cout<<l;
    }
    else
    {
        cout<<0;
    }

    return 0;
}
