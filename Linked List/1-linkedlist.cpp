#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;
    
    node(int val)
    {
        data =val;
        next=NULL;
    }
};
int main(){
    /// Statically
   node n1(1);
   node n2(2);

  n1.next = &n2;
  cout<<n1.data<<" "<<n2.data<<endl;

  node *head = &n1;

  cout<<head->data<<endl;
return 0;
}