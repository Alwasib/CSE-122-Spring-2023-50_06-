#include<iostream>
using namespace std;
int main()
{
    int n,k,i,a=0,p=0;
    cin>>n>>k;
    for(i=0;i<k;i++)
    {
        if(n%10!=0)
        {
            n--;
        }
        else
        {
            n=n/10;
        }
    }
    cout<<n<<endl;
    return 0;
}
