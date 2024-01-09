#include<bits//stdc++.h>
using namespace std;
int main()
{
    double m,sum=0,x,n;
    int i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        sum=sum+x;
    }
    m=(sum/n);
    cout<<setprecision(14)<<m<<endl;
    return 0;
}
