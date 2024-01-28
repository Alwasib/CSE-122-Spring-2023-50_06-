#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,l,c=0;
   string s;
   cin>>s;
   l=s.size();
   if(l==6)
   {
   for(i=0;i<l;i++)
   {
       if( s[i]=='a'|| s[i]=='e'|| s[i]=='o'|| s[i]=='u'|| s[i]=='i')
       {
          c++;
       }
   }
     if(c>0)
   {
        cout<<"INVALID"<<endl;
   }
   else
   {
        cout<<"VALID"<<endl;
   }
   }
   else
   {
       cout<<"Invalid";
   }
}
