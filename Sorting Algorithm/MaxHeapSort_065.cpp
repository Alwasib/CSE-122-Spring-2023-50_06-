#include<iostream>
using namespace std;
void Max_Heapify(int a[], int n, int i)
{
    int p=i;
    int l=2*i+1;
    int r=2*i+2;

    if (l<n && a[l]>a[p])
        p=l;
    else
        p=i;
    if (r<n&& a[r]>a[p])
        p= r;
    if (p!=i)
    {
        swap (a[i],a[p]);
        Max_Heapify(a,n, p);
    }
}

void buildMaxHeap(int a[],int n)
{
    for(int i=n/2-1;i>=0;i--)
    {
        Max_Heapify(a,n,i);
    }
}

void Heap_Sort(int a[],int n)
{
    buildMaxHeap(a,n);

    for (int i=n-1;i>0;i--)
    {
        swap(a[0], a[i]);
        Max_Heapify(a,i,0);
    }
}

int main()
{
    int a[]={28, 10, 5, 7, 96, 9, 10};
    int n = sizeof(a)/sizeof(a[0]);
    Heap_Sort(a,n);
    for (int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
