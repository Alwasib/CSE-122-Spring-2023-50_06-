#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,i,c=0;
    string x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(x =="1")
        {
          c++;
        }
    }
    if(c>0)
    {
        cout<<"HARD"<<endl;
    }
    else
    {
        cout<<"EASY"<<endl;
    }
    return 0;
}
