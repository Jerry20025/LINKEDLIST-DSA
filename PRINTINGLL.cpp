
#include <bits/stdc++.h>

using namespace std;
class node{
    public: 
     int data ; 
     node *next; 
};
void insert(node** head, int n){
    node *new_node=new node(); 
    new_node->data=n; 
    new_node->next=*head; 
    *head=new_node; 
}
void print(node **head){
    node *temp=*head; 
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    node *head=NULL; 
    insert(&head,30); 
    insert(&head,20); 
    insert(&head,10);
    print(&head);

    return 0;
}
//o/p-> 10->20->30;
