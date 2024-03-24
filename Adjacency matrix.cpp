#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,j,n,src,dest,edge;
    cout<<"Please enter your Number : ";
    cin>>n;
    int arr[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        arr[i][j]=0;
    }
    }
    cout<<"Enter your edge Number : ";
    cin>>edge;
    for(i=0;i<edge;i++)
    {
        cout<<"Enter your Src : ";
        cin>>src;
        cout<<"Enter your dest : ";
        cin>>dest;
        if(src>0)
        {
            arr[src-1][dest-1]=1;
        }
        else if(src==0)
        {
            break;
        }
    }


     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
       cout<<" "<<arr[i][j];
    }
    cout<<endl;
    }
}
