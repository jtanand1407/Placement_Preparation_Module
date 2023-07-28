#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;

    node (int val)
    {
        data=val;
        next=NULL;
    }
};

node* takeinput(){
    int data;
    cin>>data;
    
    node* head=NULL;
    node* tail=NULL;
    while(data!= -1)
    {
        node *n= new node(data);
        if(head==NULL)
        {
            head=n;
            tail=n;
        }
        else{
            tail->next=n;
            tail=n;
        }
        cin>>data;
    }
    return head;
}

void length(node *head)
{
    node *temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    cout<<count;
}

int main(){
    node *head=takeinput();
    length(head);
return 0;
}