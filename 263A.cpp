#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double i,j,m=0,n;
    for(i=1;i<=5;i++)
        {
        for(j=1;j<=5;j++)
        {
            cin>>n;
            if(n==1)
            {
                m=abs(i-3)+abs(j-3);
            }
        }
    }
    cout<<m;
    return 0;
}
