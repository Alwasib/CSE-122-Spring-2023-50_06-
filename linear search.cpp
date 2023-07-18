#include<iostream>
using namespace std;
int main()
{
    int i,a[8],x=33,loc=0,n=1;
    for(i=1;i<=7;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=7;i++)
    {
        n++;
        if(a[i]==x)
        {
            loc=i;
            cout<<"Item Found : "<<x<<endl;
            cout<<"Location : "<<loc<<endl;
            break;
        }
        else if(n>7)
        {
            cout<<"Item Not Found"<<endl;
        }
    }
}
