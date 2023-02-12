#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int i,x,m;
    string s;
    cin>>s;
    m=s.size();
    sort(s.begin(),s.end());
    for(i=0;i<m;i++)
    {
        if(s[i]!=s[i+1]){
            x++;
        }
    }
    if(x%2==0){
        cout<<"CHAT WITH HER";

    }
    if(x%2!=0){
        cout<<"IGNORE HIM!";

    }
    return 0;





}
