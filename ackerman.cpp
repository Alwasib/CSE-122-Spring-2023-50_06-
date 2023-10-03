#include<iostream>
using namespace std;
int akmn(int x, int y)
{
    if(x==0)
    return y+1;
    else if(y==0)
        return akmn(x-1,1);
    else if(x>0 &&y>0)
        return akmn(x-1,akmn(x,y-1));
}
int main()
{
    int m,n,ans;
    cin>>m>>n;
    ans=akmn(m,n);
    cout<<ans;
}
