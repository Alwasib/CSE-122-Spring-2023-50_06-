#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int a,i,c=0;
    string s;
    cin>>s;
    a=s.size();
    sort(s.begin(),s.end());
    for(i=0;i<a;i++)
    {
     if(s[i]!=s[i+1])
     {
       c++;
     }
    }
    if(c%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
     cout<<"IGNORE HIM!";
    }
}
