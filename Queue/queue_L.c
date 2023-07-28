#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*front=NULL,*rear=NULL;

void insert(int item){
    struct node*temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=item;
    if(front==NULL)
    {
        front=temp;
        temp->next=NULL;
        rear=temp;
    }
    else
    {
        rear->next=temp;
        temp->next=NULL;
        rear=temp;
    }
    
}

int delete(){
    struct node*p;
    int item;
    if(front==NULL)
    {
        printf("queue underflow\n");
    }
    else{
        item=p->data;
        p=front;
        front=front->next;
        free(p);
    }
    return item;
}


int peek(){
    if(front==NULL){
        printf("queue underflow\n");
    }
    else
    return front->data;
}

void display(){
    struct node* p;
    p=front;
    if(front==NULL){
        printf("queue is empty\n");
        return;
    }
    printf("queue elements are :\n");
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
int main(){
    printf("1.insert\n2.delete\n3.peek\n4.display\n5.exit\n");
    int n;
    while(1)
    {
        printf("enter your choice: \n");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
            printf("enter the element you want to insert: ");
            int item;
            scanf("%d",&item);
            insert(item);
            break;

            case 2:
            printf("the deleted element is %d\n",front->data);
            delete();
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