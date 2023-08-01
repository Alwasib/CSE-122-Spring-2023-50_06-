#include<stdio.h>
int main()
{
    int a[100],n,i,fnd,ch,base;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf(" \t%d",a[i]);
    }
    printf("Please enter your element to find address");
    scanf("%d",&ch);
     for(i=0;i<n;i++)
    {
        if(a[i]==ch)
        {
            fnd=i;
        }
    }
  base=a;
  printf("%d",base);
}
