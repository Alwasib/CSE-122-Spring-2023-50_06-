#include<stdio.h>
#include<ctype.h>
char stack[100];
int top=-1;
void push(char n)
{
    stack[++top]=n;
}
char pop()
{
    if(top==-1)
        return -1;
    else
    {
        return stack[top--];
    }
}
int priority(char n)
{
    if(n=='(')
     return 0;
    if(n=='+'||n=='-')
        return 1;
    if(n=='*'|| n=='/')
        return 2;
        return 0;
}
int main()
{
    char exp[100];
    char  *e,n;
    printf("enter the expression :");
    scanf("%s",exp);
    printf("\n");
    e=exp;

 while(*e!='\0')
    {
        if(isalnum(*e))
            printf("%c",*e);
        else if(*e=='(')
            push(*e);
        else if(*e == ')')
        {
      while((n = pop()) != '(')
        printf("%c",n);
        }
        else
        {
        while(priority(stack[top]) >= priority(*e))
            printf("%c ",pop());
            push(*e);
        }
        e++;
    }
       while(top!= -1)
    {
        printf("%c",pop());
    }
    return 0;
}

