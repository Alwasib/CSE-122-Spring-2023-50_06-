#include<iostream>
using namespace std;
int main()
{
    int i,a,b,p,c,d=0;
    cin>>a>>b;

    for(i=0; i<=1000; i++)
    {
        p=a*3;
        c=b*2;
        if(p>c)
        {
            d++;
            break;
        }
        else
        {
            a=p;
            b=c;
            d++;
        }
    }
    cout<<d;
}
