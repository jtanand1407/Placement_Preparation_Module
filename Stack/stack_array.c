#include<stdio.h>
#include<stdlib.h>    //exit() function use krne ke liye stdlib.h header file ka use krte hain
#define MAX 10
int stack_arr[MAX];
int top=-1;
void push(int item);
int pop();
int peek();
int isEmpty();
int isFull();
void display();

int main(){
    int choice,item;
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Display the top element\n");
        printf("4.Display all the elements\n");
        printf("5.Quit\n");
    while(1)
    {
        
        printf("enter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("enter the item to be pushed : ");
            scanf("%d",&item);
            push(item);
            break;

            case 2:
            item = pop();
            printf("Popped item is : %d\n",item);
            break;

            case 3:
            printf("Item at the top is : %d", peek());
            break;

            case 4:
            display();
            break;

            case 5:
            exit(1);

            default: 
            printf("enter valid option");
            
        }

    }
return 0;
}

void push(int item)
{
    if(top==MAX-1)
    {
        printf("overflow");
    }
    else{
        top++;
        stack_arr[top]=item;
    }
}

int pop(){
    int value;
    if(top==-1)
    {
        printf("underflow");
    }
    else{
        value=stack_arr[top];
        top--;
    }
    return value;
}

int peek(){
    if(top==-1)
    {
        printf("underflow");
    }
    else{
        return stack_arr[top];
    }
}

void display(){
    if(top==-1){
        printf("underflow");
    }
    else{
        for(int i=top;i>=0;i--)          /// yha pe i<=0 kr diye the galti se tbhi code run nhi ho rha tha
        {
            printf(" %d\t",stack_arr[i]);
        }
    }
}