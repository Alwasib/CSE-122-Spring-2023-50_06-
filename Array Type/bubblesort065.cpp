#include<iostream>
using namespace std;
int main()
{
    int  a[20],sz=6,i,j,temp=0,p=0;
    for(i=0;i<6;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<sz-1;i++)
    {
        for(j=0;j<sz-i-1;j++)
        {
          p++;
          if(a[j]>a[j+1])
          {
              temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
          }
        }
    }
    for(i=0;i<sz-1;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"comparison"<<p<<endl;

}
