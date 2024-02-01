#include<iostream>
using namespace std;
void Swap(int a[],int l, int h)
{
    int temp=a[l];
    a[l]=a[h];
    a[h]=temp;
}
int Partition(int a[], int l, int h)
{
    int pivot=a[h];
    int i=l, j=h;
    while(i<j)
    {
        while(a[i]<pivot)
        {
            i++;
        }
        while(a[j]>=pivot)
        {
            j--;
        }
        if(i<j)
            Swap(a,i,j);
    }
    Swap(a,h,i);
    return i;
}
void quicksort(int a[],int l, int h)
{
    if(l<h)
    {
        int pivot=Partition(a,l,h);
        quicksort(a,l,pivot-1);
        quicksort(a,pivot,h);
    }
}
int main()
{
    int a[]={2,5,3,1,7,8};
    int n=sizeof(a)/sizeof(a[0]);
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

