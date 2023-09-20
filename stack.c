#include<stdio.h>
#define n 5
int stack[n];
int top=-1;
void push(int x)
{
    if(top<n-1)
    {
        top=top+1;
        stack[top]=x;
        printf("successfully push item:%d\n",x);
    }
        else
        {
            printf("push item overflow");
        }
}
int pop()
{
    if(top>=0)
    {
        int item=stack[top];
        top--;
        printf("pop item is : %d\n",item);
    }
    else
    {
        printf("emty");
    }
}
int main()
{
    printf("implementing stack\n");
    push(1);
    push(2);
    push(3);
    push(4);
    pop();
    push(5);
    pop();
    push(6);
    return 0;
}
