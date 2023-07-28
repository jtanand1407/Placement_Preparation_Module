#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int c_queue[MAX];
int front=-1;
int rear=-1;

void enqueue(int item){

    if(front==0 && rear==MAX-1 || front==rear+1){
        printf("queue overflow\n");
        return;
    }
    if(front==-1)
    {
        front=0;
    }
    if(rear==MAX-1)
    {
        rear=0;
    }
    else{
        rear=rear+1;
    }
    c_queue[rear]=item;
}

int dequeue(){
    int item;
    if(front==-1)
    {
        printf("queue underflow\n");
        exit(1);
    }
    item=c_queue[front];
    if(front==rear){
        front=-1;
        rear=-1;
    }
    else if(front==MAX-1)
    front=0;
    else
    front++;
    return item;
}

int peek(){
    if(front==-1)
    {
        printf("queue underflow\n");
        exit(1);
    }
    else
    return c_queue[front];
}

void display(){
    int i;
    if(front==-1)
    {
        printf("queue underflow\n");
        return;
    }
    printf("queue elements are :\n");
    i=front;
    if(front<rear)
    {
        while (i<=rear)
        {
            printf("%d ",c_queue[i++]);
        }
        
    }
    else{
        while(i<=MAX-1)
            printf("%d ",c_queue[i++]);
        i=0;
        while(i<=rear)
            printf("%d ",c_queue[i++]);
    }
    printf("\n");

}

int main(){
    printf("1.insert\n2.delete\n3.front element\n4.display\n5.exit\n");
    int n;
    while(1)
    {
        printf("enter your choice : ");
        scanf("%d",&n);

        switch (n)
        {
        case 1:
            printf("enter the element you want to insert: ");
            int item;
            scanf("%d",&item);
            enqueue(item);
            break;
        
        case 2:
            printf("the deleted element is %d\n",dequeue());
            break;

        case 3:
            printf("the element at the front is %d\n",c_queue[front]);
            break;
        
        case 4:
            display();
            break;

        default:
            printf("invalid choice\n");
        }
    }
return 0;
}