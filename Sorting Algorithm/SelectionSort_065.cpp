#include<iostream>
using namespace std;
int main()
{
int i,a[6],n,temp,mn,j;
cin>>n;
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(i=0;i<n-1;i++)
{
mn=i;
for(j=i+1;j<n;j++)
{
if(a[j]<a[mn])
mn=j;
}
if(mn!=i)
{
temp=a[mn];
a[mn]=a[i];
a[i]=temp;
}
}
for(i=0;i<n;i++)
{

cout<<a[i]<<" ";
}
}
