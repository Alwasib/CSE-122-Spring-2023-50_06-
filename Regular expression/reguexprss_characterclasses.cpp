#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,l,c=0;
   string s;
   cin>>s;
   l=s.size();
   for(i=0;i<l;i++)
   {
       if(s[i]>='a'&&s[i]<='m')
       {
           c++;
       }
       else
       {
           c=0;
           break;
       }
   }
   if(c>0)
   {
       cout<<"Valid";
   }
   else
   {
       cout<<"Invalid";
   }
}
