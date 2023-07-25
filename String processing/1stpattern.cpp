#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[80]={"aba"};
    char b[80]={"abbbabbb"};
    int aln,bln,mx,k=0,index;
    aln=strlen(a);
    bln=strlen(b);
    mx=bln-aln;
    while(k<=mx)
    {
     int i;
     for(i=1;i<aln;i++)
     {
        if(a[i]!=b[k+1])
            break;
        if(i==aln)
        {
           index=k;
            break;
        }
        else
        {
           k=k+1;
        }
     }
    }
    if(k>mx)
        index=-1;
    cout<<a<<endl;
    cout<<b<<endl;
    if(index!= -1)
    cout<<index<<endl;
    else
    cout<<"item not found"<<endl;
    return 0;

}
