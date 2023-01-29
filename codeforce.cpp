#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,n,k,f=0;
    cout<<"please enter your input number";
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
            if(a[i]>=a[k-1]&&a[i]>0){
                f++;
            }

    }
    cout<<f;
}
