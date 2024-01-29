//a(bc)+de
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i=3,l;
    l=s.size();
    if(l>=5&& s[0]=='a'&& s[1]=='b'&& s[2]=='c'&&s[l-2]=='d'&&s[l-1]=='e')
    {
        if(l==5)
        {
            cout<<"Valid";
        }
        else
        {
            while(i<l-2)
            {
                if(s[i]=='b')
                {
                    if(s[i]=='c')
                    {
                        i=i+2;
                    }
                    else
                    {
                        cout<<"Invalid";
                        return 0;
                    }
                }

            else if(s[i]=='a'||s[i]=='d'||s[i]=='e')
            {
                cout<<"Invalid";
            }
            else
            {
                i++;
            }
            }
            cout<<"Valid";
            return 0;
        }
    }
    else
    {
        cout<<"Invalid";
    }
}

