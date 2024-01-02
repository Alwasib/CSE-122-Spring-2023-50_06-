#include<iostream>
using namespace std;
int main()
{
    string s;
    int n,i,c=0,d=0;
    cin>>n;
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]=='A')
        {
            c++;
        }
        else if(s[i]=='D')
        {
            d++;
        }
    }
    if(c>d)
    {
        cout<<"Anton"<<endl;
    }
    else if(c==d)
    {
       cout<<"Friendship"<<endl;
    }
    else
    {
         cout<<"Danik"<<endl;
    }
}

