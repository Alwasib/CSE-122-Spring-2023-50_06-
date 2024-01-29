//a(bc)*de
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i=1,l;
    l=s.size();
    if(l>=3&& s[0]=='a'&&s[l-2]=='d'&&s[l-1]=='e')
    {
        if(l==3)
        {
            cout<<"Valid";
        }
        else
        {
            while(i<l-2)
            {
                if(s[i]=='b')
                {
                    if(s[i+1]=='c')
                    {
                        i=i+2;
                    }
                else
                {
                    cout<<"Invalid";
                    return 0;
                }
                }
                else
                {
                    cout<<"Invalid";
                     return 0;
                }
            }
            cout<<"Valid";
        }
    }
    else
    {
        cout<<"Invalid";
    }
}
