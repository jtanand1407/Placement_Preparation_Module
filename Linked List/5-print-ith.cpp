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

node * takeinput(){
    int data;
    cin>>data;
    node *head=NULL;
    node *tail=NULL;

    while(data != -1){
        node *n = new node(data);

        if(head==NULL){
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

void print_ith(int i,node* head)
{
    node *temp=head;
    while(--i){
        temp=temp->next;
    }
    cout<<temp->data;
}

int main(){
    node *head=takeinput();
    int pos;
    cout<<"enter the position you want to print:";
    cin>>pos;
    print_ith(pos,head);
return 0;
}