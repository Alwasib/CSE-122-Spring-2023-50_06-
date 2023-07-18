#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c,x1,x2,d;
    cin>>a>>b>>c;
    d=(b*b)-4*(a*c);
    if(d>0)
    {
        x1=((-b)+sqrt(d))/2*a;
        x2=((-b)-sqrt(d))/2*a;
        cout<<x1<<endl;
        cout<<x2<<endl;
    }
    else
        {
            x1=(-b)/2*a;
            x2=(-b)/2*a;
            cout<<x1<<endl;
            cout<<x2<<endl;
        }
}
