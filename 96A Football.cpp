#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    int l,i,c=1;
    cin>>a;
    l= a.size();
    for(i=0;i<l;i++)
    {
      if(a[i]==a[i+1])
       {
           c++;
           if(c==7)
           {
               break;

           }

       }
       else
       {
           c=1;
       }
    }
   if(c>=7)
   {
       cout<<"YES"<<endl;
   }
   else
   {
       cout<<"NO"<<endl;
   }
   return 0;
}
