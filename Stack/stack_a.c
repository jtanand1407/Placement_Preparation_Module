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
    }
    else{
        top++;
        stack[top]=item;
    }
}
int pop(){
    if(top==-1){
        printf("stack underflow\n");
    }
    int x;
    x=stack[top];
    top--;
    return x;
}
int peek(){
    if(top==-1){
        printf("stack underflow\n");
    }
    return stack[top];
}
void display(){
    if(top==-1){
        printf("stack underflow\n");
    }
    for(int i=top;i>=0;i--)
    {
        printf("|");
        printf("    %d      ",stack[i]);
        printf("|\n");
        printf("___________\n");
    }
}
int main(){
    printf("1.push\n2.pop\n3.peek\n4.display\n5.exit\n");
    int n;
    while (1)
    {
        printf("enter your choice\n");
        scanf("%d",&n);
        switch (n)
        {
        case 1:
            printf("enter the element you want to push\n");
            int item;
            scanf("%d",&item);
            push(item);
            break;
        case 2:
            printf("the popped element is %d\n",pop());
            break;
        case 3:
            printf("the element at the top is %d\n",peek());
            break;
        case 4:
            display();
            printf("\n");
            break;
        case 5:
            exit(0);
        default:
            printf("invalid choice\n");
            break;
        }
    }
    
return 0;
}