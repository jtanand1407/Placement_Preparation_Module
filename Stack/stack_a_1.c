#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int stack[MAX];
int top=-1;
void push(int item)
{
    if(top==MAX-1)
    {
        printf("stack overflow\n");
        return;
    }
    top++;
    stack[top]=item;
}

int pop(){
    int item;
    if(top==-1)
    {
        printf("stack underflow\n");
        exit(0);
    }
    item=stack[top];
    top++;
    return item;
}

int peek(){
    if(top==-1)
    {
            printf("stack underflow\n");
            exit(0);
    }
    return stack[top];
}

void display(){
    if(top==-1)
    {
        printf("stack underflow\n");
        return;
    }
    int i;
    for(i=top;i>0;i--)
    {
        printf("%d ",stack[top]);
    }
}

int main(){
    
return 0;
}