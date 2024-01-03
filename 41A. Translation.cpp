#include<iostream>
#include<string>
using namespace std;
int main()
{
  string s;
  string t;
  int i,l,c=0;
  cin>>s;
  cin>>t;
  l=t.size()-1;
  for(i=0;i<=l;i++)
  {
     if(s[i]!=t[l-i])
     {
         c++;
         break;
     }
  }
  if(c>0)
  {
      cout<<"NO"<<endl;
  }
  else
  {
      cout<<"YES"<<endl;
  }

}



