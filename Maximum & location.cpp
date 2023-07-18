#include<iostream>
using namespace std;
int main()
{
    int i,a[8],mx,loc=0;
    for(i=1;i<=7;i++)
    {
        cin>>a[i];
    }
    mx=a[1];
    for(i=1;i<=7;i++)
    {
       if(a[i]>mx)
       {
           mx=a[i];
           loc=i;
       }
    }
    cout<<"maximum number "<<mx<<endl;
    cout<<"Location "<<loc<<endl;
}
