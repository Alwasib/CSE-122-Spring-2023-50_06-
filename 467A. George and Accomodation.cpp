#include<iostream>
using namespace std;
int main()
{
    int i,n,p,q,c=0,d;
    cin>>n;
    for(i=0;i<n;i++)
    {
      cin>>p>>q;
      if(p<q)
      {
        d=(q-p);
        if(d>=2)
        {
            c++;
        }
      }
    }
   cout<<c<<endl;
   return 0;
}
