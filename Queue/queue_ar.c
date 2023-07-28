#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int queue[MAX];
int rear=-1;
int front=-1;

void insert(int item){
    if(rear>=MAX-1){
        printf("queue overflow\n");
        return;
    }
    if(front==-1)
    front++;
    rear++;
    queue[rear]=item;
}

void display(){
    int i;
    for(i=front;i<=rear;i++)
    {
        printf("%d ",queue[i]);
    }
}

int delete(){
    int item;
    if(front==-1)
    {
        printf("Queue underflow\n");
        exit(1);
    }
    item=queue[front];
    front++;
    return item;
}

int peek(){
    if(front==-1){
        printf("queue Underflow\n");
        exit(1);
    }
    return queue[front];
}



int main(){
    printf("1.insert\n2.delete\n3.peek\n4.display\n5.exit\n");
    int n;
    while (1)
    {
        printf("enter your choice: \n");
        scanf("%d",&n);
        switch (n)
        {
        case 1:
            printf("enter the data you want to insert\n");
            int item;
            scanf("%d",&item);
            insert(item);
            break;
        case 2:
            printf("the deleted element is %d\n",delete());
            break;
        case 3:
            printf("the element at the front is %d\n",peek());
            break;
        case 4:
            display();
            break;
        case 5:
            exit(1);
        default:
            printf("invalid choice\n");
        }
    }
    
return 0;
}