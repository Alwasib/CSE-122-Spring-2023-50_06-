#include<iostream>
using namespace std;
int main()
{
   int i,a[11],mid,st=1,en=10,p=0,loc=0,x=3;
    for(i=1;i<=10;i++)
    {
        cin>>a[i];
    }
    while(st<en)
    {
        mid=(st+en)/2;
        if(a[mid]==x)
        {
            loc=mid;
            cout<<"Item found "<<x<<endl;
             cout<<"Location "<<loc<<endl;
             p++;
             break;
        }
        else if(a[mid]>x)
        {
            en=mid-1;
        }
         else if(a[mid]<x)
        {
            st=mid+1;
        }
    }
    if(p==0)
    {
        cout<<"Item Not Found"<<endl;
    }
}
