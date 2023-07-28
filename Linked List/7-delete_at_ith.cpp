#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;

    node(int val){
        data=val;
        next=NULL;
    }
};

node* delete_at_ith(node *head,int i)
{
    node* temp=head;
    int pos=i-1;
    while(--pos)
    {
        head=head->next;
    }
    head->next=head->next->next;
    return temp;
    
}

node* takeinput(){
    int data;
    cin>>data;
    node *head=NULL;
    node *tail=NULL;

    while(data != -1)
    {
        node *n= new node(data);
        
        if(head==NULL)
        {
            head=n;
            tail=n;
        }

        else
        {
            tail->next=n;
            tail=n;
        }
        cin>>data;
    }
    return head;
}

void print(node *head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}

int main(){
    node *head=takeinput();
    int i;
    cout<<"enter the position of the node you want to delete";
    cin>>i;
    node *dlt = delete_at_ith(head,i);
    print(dlt);
return 0;
}