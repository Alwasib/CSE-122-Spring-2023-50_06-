#include<iostream>
using namespace std;
void insrtsort(int a[6], int n)
{
int i,j,m;
for(i=1;i<n;i++)
{
m=a[i];
j=i-1;
while(j>=0&&a[j]>m)
{
a[j+1]=a[j];
j--;
}
a[j+1]=m;
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
int a[6],n,i;
cin>>n;
for(i=0;i<n;i++)
{
cin>>a[i];
}
insrtsort(a,n);
show(a,n);
}
