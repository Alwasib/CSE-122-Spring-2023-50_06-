#include<iostream>
using namespace std;
int main()
{
    int i,n,a,b,c;
    cin>>n;
    for(i=1;i<=n;i++)
    {
      cin>>a>>b>>c;
      if(a+b==10||a+b>10)
      {
          cout<<"YES"<<endl;
      }
     else if(a+c==10||a+c>10)
      {
          cout<<"YES"<<endl;
      }
      else if(b+c==10||b+c>10)
      {
          cout<<"YES"<<endl;
      }
      else
      {
          cout<<"NO"<<endl;
      }
    }
}
