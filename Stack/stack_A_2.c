#include<stdio.h>
#define MAX 10
int top=-1;
int stack[MAX];
void push(int item)
{
    if(top==MAX-1)
    {
        printf("stack overflow\n");
        return;
    }
    if(top==-1)
    {
        top=0;
        stack[top]=item;
    }
    else{
        top++;
        stack[top]=item;
    }
}

int pop(){
    if(top==-1)
    {
        printf("stack underflow\n");
        exit(0);
    }
    else{
        int item = stack[top];
        top--;
        return item;
    }
    
}

int top_element(){
    if(top==-1)
    {
        printf("stack underflow\n");
        exit(0);
    }
    else{
        return stack[top];
    }
}

void display(){
    if(top==-1)
    {
        printf("stack underflow\n");
        exit(0);
    }
    else{
        int i=0;
        for(i=top;i>=0;i--)
        {
            printf("%d ",stack[i]);
        }
    }
}

int main(){
    printf("1.push\n2.pop\n3.top_element\n4.display\n");
    int ch;
    while(1)
    {
        printf("enter your choice: ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            int item;
            printf("enter the data you want to insert: ");
            scanf("%d",&item);
            push(item);
            break;
        
        case 2:
            printf("the popped element is %d\n",pop());
            break;

        case 3:
            printf("the element at top is %d\n",top_element());
            break;

        case 4:
            display();
            break;

        default:
            printf("enter valid choice\n");
            break;
        }
    }
return 0;
}