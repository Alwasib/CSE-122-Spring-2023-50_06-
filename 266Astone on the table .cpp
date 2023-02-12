#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,x,c=0;
    cin>>x;
    string s;
    cin>>s;
    for(i=0;i<x;i++){
            if(s[i]==s[i+1]){
                c++;
            }

    }
    cout<<c;
    return 0;

}
