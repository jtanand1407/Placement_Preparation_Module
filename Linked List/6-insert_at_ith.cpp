#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data; 
    node* next;

    node(int val)
    {
        data=val;
        next=NULL;
    }
};

node * takeinput(){
    int data;
    cin>>data;
    node *head=NULL;
    node *tail=NULL;
    while(data != -1)
    {
        node *n = new node(data);
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

node* insert_at_ith(int i,node *head,int data){
    if(i<0)
    {
        return head;
    }
    else if(i==0)
    {
        node *n = new node(data);
        n->next=head;
        head=n;
        return head;
    }
    node *copyhead=head;
    int pos=i-1;
    while(--pos && head!=NULL){
        head=head->next;

    }
    if(head)
    {
        node *n = new node(data);
        n->next=head->next;
        head->next=n;
        return copyhead;
    }
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
    int data,i;
    cout<<"enter the data :";
    cin>>data;
    cout<<"enter the position you want to insert at:";
    cin>>i;
    node* cpy= insert_at_ith(i,head,data);
    print(cpy);

return 0;
}