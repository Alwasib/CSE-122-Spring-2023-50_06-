#include<iostream>
using namespace std;
int main()
{
    long long int n,i,sum=0;
    cin>>n;
   if(n%2!=0)
   {
       sum=-(n/2+1);
   }
   else
   {
     sum=n/2;
   }
    cout<<sum<<endl;
    return 0;
}
