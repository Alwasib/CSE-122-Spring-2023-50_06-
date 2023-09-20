#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node*a = NULL;
    struct node*b = NULL;
    struct node*c = NULL;
    a=(struct node*)malloc(sizeof(struct node));
    b=(struct node*)malloc(sizeof(struct node));
    c=(struct node*)malloc(sizeof(struct node));
    a->data=2;
    b->data=7;
    c->data=10;
    a->next=b;
    b->next=c;
    c->next=NULL;
    while(a!=NULL)
    {
        printf("%d\n",a->data);
        a=a->next;
    }
    return 0;
}
