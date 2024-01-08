#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int f[n];
    int o[n];
    for(i=1;i<=n;i++)
    {
        cin>>f[i];
        o[f[i]]=i;
    }
    for(i=1;i<=n;i++)
    {
        cout<<o[i]<<" ";
    }

}
