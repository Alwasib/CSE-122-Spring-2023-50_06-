#include<iostream>
#include<string>
using namespace std;
int main()
{
    string n;
    int i,l,c=0;
    cin>>n;
   l=n.size();
    for(i=0;i<l;i++)
    {
        if(n[i]=='4'|| n[i]=='7')
        {
            c++;
        }
    }
    if(c==4|| c==7)
    {
        cout<<"YES"<<endl;
    }
    else
    {
       cout<<"NO"<<endl;
    }
    return 0;
}

