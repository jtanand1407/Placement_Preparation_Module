#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node{
    int data;
    struct node*next;
}*top=NULL;

void push(int item){
    struct node*temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=item;

    if(top==NULL)
    {
        top=temp;
        temp->next=NULL;
        return;
    }
    temp->next=top;
    top=temp;
}

int pop(){
    struct node*temp=top;
    if(top==NULL){
        printf("stack underflow\n");
        exit(1);
    }
    int item=top->data;
    top=top->next;
    free(temp);
    return item;
}

int peek(){
    if(top==NULL)
    {
        printf("stack is empty\n");
    }
    return top->data;
}

void display(){
    if(top==NULL)
    {
        printf("stack is empty\n");
    }
    struct node* p=top;
    while(p!=NULL){
        printf("%d\n",p->data);
        p=p->next;
    }
}

int main(){
    int n;
    printf("1.push\n2.pop\n3.peek\n4.display\n5.exit\n");
    while (1)
    {
       
        printf("enter your choice\n");
        scanf("%d",&n);
        switch (n)
        {
        case 1:
            printf("enter the element you want to insert\n");
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
            break;
        case 5:
            exit(1);
        default:
            printf("invalid choice\n");
            break;
        }
    }
    
return 0;
}