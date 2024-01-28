#include<iostream>
#include<string>
using namespace std;
int main()
{
    char s[100];
    cin>>s;
        if(s[0]=='a'&&s[1]=='d'&&s[2]=='e'|| s[0]=='a'&&s[1]=='b'&&s[2]=='c'&&s[3]=='d'&&s[4]=='e')
        {
            cout<<"Valid";
        }
    else
    {
        cout<<"INvalid";
    }
}
