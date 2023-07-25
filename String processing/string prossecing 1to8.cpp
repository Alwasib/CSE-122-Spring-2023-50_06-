#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  string a,b,c,index,d,e,p;
  cout<<"enter your string"<<endl;
  getline(cin,p);
  cout<<"Substring is: "<<p.substr(2-1,3)<<endl;
  cout<<"enter your 1st string"<<endl;
  getline(cin,a);
  cout<<"replacemanet is :"<<a.replace(3,4,"xyz")<<endl;
  cout<<"enter your 2nd string"<<endl;
  getline(cin,b);
  cout<<" Delete is :"<<b.erase(3,3)<<endl;
  c=a+b;
  cout<<"Concatenation :"<<c<<endl;
  index=c.find("the");
  cout<<"Index is :"<<index<<endl;
  cout<<"enter your 3rd string"<<endl;
  getline(cin,d);
  cout<<"insertation "<<d.insert(4,"xyz")<<endl;
  cout<<"enter your 4th string"<<endl;
  getline(cin,e);
  cout<<"length :"<<e.length()<<endl;
}
