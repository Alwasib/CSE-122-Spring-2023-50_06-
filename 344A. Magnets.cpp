#include<iostream>
using namespace std;
int main()
{
    int n,i,c=0;
    cin>>n;
    int x[n];
    for(i=0;i<n;i++)
    {
        cin>>x[i];
    }
     for(i=0;i<n;i++)
    {
        if(x[i]!=x[i+1])
        {
            c++;
        }

    }
   cout<<c<<endl;
   return 0;
}
