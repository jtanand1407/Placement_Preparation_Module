#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int queue[MAX];
int front=-1;
int rear=-1;

void enqueue(int item){
    if(rear==MAX-1)
    {
        printf("queue overflow\n");
        return;
    }
    if(front==-1)
    {
        front++;
    }
    rear++;
    queue[rear]=item;
}

int dequeue(){
    if(front==-1)
    {
        printf("queue underflow\n");
        exit(1);
    }
    int item=queue[front];
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
    return queue[front];
}

void display(){
    int i;
    printf("queue elements are :\n");
    for(i=front;i<=rear;i++)
    {
        printf("%d ",queue[i]);
    }
}

int main(){
    printf("1.insert\n2.delete\n3.peek\n4.display\n5.exit\n");
    int n;
    while(1)
    {
        int n;
        printf("enter your choice :\n");
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
            printf("the element at the front is %d\n",peek());
            break;

        case 4:
            display();
            printf("\n");
            break;

        case 5:
            exit(1);
        
        default:
            printf("invalid choice\n");
        }
    }
return 0;
}