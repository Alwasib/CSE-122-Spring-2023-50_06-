#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0,c=0,a,b;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
       sum=(sum+b)-a;
       if(sum>c)
       {
           c=sum;
       }
    }
    cout<<c<<endl;
}
/*4
0 3
2 5
4 2
4 0*/
