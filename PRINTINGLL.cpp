#include <bits/stdc++.h>

using namespace std;
class node{
    public: 
    int data ; 
    node *next;
    node(int data){
        this->data=data; 
        this->next=NULL;
    }
};
void insert(node* &head, int n){
    node *new_node=new node(n); 
    // new_node->data=n; 
    new_node->next=head; 
    head=new_node; 
}
void insert_end(node* &tail, int n){
    node*temp=new node(n); 
    tail->next=temp; 
    tail=tail->next;
    
}
void inser_at(node* &head, int n, int k){
    node *temp=head; 
    int count=0;
    node *temp1=new node(n); 
    while(count!=k-1){
        temp=temp->next;
        count++; 
    }
    temp1->next=temp->next; 
    temp->next=temp1; 
     
    
}
void print(node* &head){
    node* temp=head; 
    while(temp!=NULL){
        cout<<"->"<<temp->data; 
        temp=temp->next; 
    }
}
int main()
{
    node *node1=new node(0); 
    node* head=node1;
    node* tail=node1; 
    insert_end(tail,10); 
    insert_end(tail,20);
    insert_end(tail,30);
    insert_end(tail,40);
    insert(head,60);
    inser_at(head,70,2);
    print(head);
    //o/p: 60->0->10->20->30->40
    cout<<endl;
    cout<<"head->data "<<head->data<<" last "<<tail->data;

    return 0;
}
