#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a=0,b=0,c=0,i;
    string s;
    cin>>s;
    a=s.size();
    for(i=0;i<a;i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            b++;
        }
        if(s[i]>='A'&&s[i]<='Z')
        {
            c++;
        }
    }
        if(b>=c)
        {
            for(i=0;i<a;i++)
            {
                s[i]=tolower(s[i]);
            }
        }
        else
        {
            for(i=0;i<a;i++)
        {
            s[i]=toupper(s[i]);
        }
        }
        cout<<s;

    return 0;
}
