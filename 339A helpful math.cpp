#include<iostream>
#include<string>
using namespace std;
int main()
{
    string p;
    cin>>p;
    int i,j;
    for(i=0; i<p.size(); i+=2)
    {
        for(j=0; j<p.size()-1; j+=2)
        {
            if(p[j]>p[j+2])
            {
                swap(p[j],p[j+2]);
            }
        }
    }
    cout<<p<<endl;


}
