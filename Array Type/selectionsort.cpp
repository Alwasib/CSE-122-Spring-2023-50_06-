#include<iostream>
using namespace std;
void seltsort(int a[6],int n)
{
    int i,j,mn,temp=0;
    for(i=0;i<n-1;i++)
    {
        mn=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[mn])
            {
                mn=j;
            }
        }
        if(mn!=i)
        {
            temp=a[mn];
            a[mn]=a[i];
            a[i]=temp;
        }
    }
}
void show(int a[6],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int i,n,a[6];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    seltsort(a,n);
    show(a,n);
}
