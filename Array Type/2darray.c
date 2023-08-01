#include<stdio.h>
int main()
{
    int x,y,base,loc1=0,w=4,loc2=0;
    scanf("%d%d",&x,&y);
    int a[x][y],f,t;
    base=a;
    scanf("%d%d",&f,&t);
    printf("A[%d][%d]",f,t);
    printf("\nBase is :%d",base);
    loc1=base+(4*(x*(t-1)+(f-1)));
    printf("\nColumn Major order is:%d",loc1);
    loc2=base+(4*(y*(f-1)+(t-1)));
    printf("\nRow Major order is:%d",loc2);
}
