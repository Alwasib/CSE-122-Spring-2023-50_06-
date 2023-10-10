#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define max 6
int front=0,rear=-1,array[max],itmcnt=0;
int peek()
{
  return array[front];
}
bool isEmpty()
{
    return itmcnt==0;
}
bool isFull()
{
    return itmcnt==max;
}
int size()
{
    return itmcnt;
}
void enqueue(int data)
{
    if(!isFull())
{
if(rear == max-1)
{
rear=-1;
}
array[++rear]= data;
itmcnt++;
}
}
int dequeue()
{
    int data=array[front++];
    if(front == max)
    {
        front =0;
    }
    itmcnt--;
    return data;
}
int main()
{
    int num;
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);
    if(isFull())
    {
        printf("Queue is Full\n");
    }
    num=dequeue();
    printf("Removing data : %d\n",num);
    enqueue(7);
    enqueue(8);
    printf("Element of front : %d\n",peek());
    printf("Queue :");
    while(!isEmpty())
    {
        int n=dequeue();
        printf("%d ",n);
    }
}

