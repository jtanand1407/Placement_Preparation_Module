#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    public:
    node *next;

    node(int val)
    {
        data=val;
        next=NULL;
    }

};

node* takeinput()
{
    int data;
    cin>>data;
    node *head=NULL;
    node *tail=NULL;
    while (data != -1)
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
            tail = n;
        }
        cin>>data;
    }
    return head;
}

void print(node *head){
    node *temp=head;
    while(head!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}
int main(){
    node *head = takeinput();
    print(head);
return 0;
}