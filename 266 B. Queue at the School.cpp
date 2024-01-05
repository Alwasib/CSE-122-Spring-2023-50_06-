#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,t,i,j;
    string x;
    cin>>n>>t;
    cin>>x;
    for(i=0;i<t;i++)
    {
       for(j=0;j<n;j++)
        {
          if(x[j]=='B'&& x[j+1]=='G')
          {
           swap(x[j], x[j+1]);
            j++;
        }
         }
    }

   cout<<x;
   return 0;

}
