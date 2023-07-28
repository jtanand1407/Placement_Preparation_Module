#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*front=NULL,*rear=NULL;

void enqueue(int item)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=item;
    temp->next=NULL;
    if(front==NULL)
    {
        front=temp;
        rear=temp;
        return;
    }
    rear->next=temp;
    rear=temp;
}

int dequeue(){
    int item;
    struct node*p;
    if(front==NULL)
    {
        printf("queue underflow\n");
        exit(1);
    }
    item=front->data;
    p=front;
    front=front->next;
    free(p);
    return item;
}

int peek(){
    if(front==NULL)
    {
        printf("queue underflow\n");
        exit(1);
    }
    return front->data;
}

void display(){
    struct node *p;
    if(front==NULL)
    {
        printf("queue underflow\n");
        return;
    }
    p=front;
    while (p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    
}
int main(){
    printf("1.insert\n2.delete\n3.peek\n4.display\n5.exit\n");
    int n;
    while(1)
    {
        printf("enter your choice\n");
        scanf("%d",&n);
        switch (n)
        {
        case 1:
            printf("enter the you want to enter :");
            int item;
            scanf("%d",&item);
            enqueue(item);
            break;

        case 2:
            printf("the deleted element is %d",dequeue());
            printf("\n");
            break;
        
        case 3:
            printf("the element at the front is %d",peek());
            printf("\n");
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