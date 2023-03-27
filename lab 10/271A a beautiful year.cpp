#include<iostream>
using namespace std;
int main()
{
    int y,i,p,q,r,s,x;
    cin>>y;
    for(i=1;i<1000;i++)
    {
       x=y+i;
       p=x/1000;
       q=(x%1000)/100;
       r=(x%100)/10;
       s=(x%10);

    if(p!=q&& p!=r&&p!=s&&q!=r&&q!=s&& r!=s)
    {
        break;
    }
    }
    cout<<p<<q<<r<<s;
    return 0;

}
