#include<iostream>
#include<stack>
using namespace std;
struct Node{
    int data;
    Node*next;
};
Node*MakeNode(int value){
    Node*newNode=new Node();
    Node*data=value;
    Node*next=NULL;
    return newNode;
}
Node*middleNode(Node*head){
    int count=0;
    Node*temp=head;
    while(head!=NULL){
        count++;
        temp=temp->next;
    }
    temp=head;
    for(int i=0;i<count/2;i++){
        temp=temp->next;
    }
    return temp;
}
// cach 2 
Node*MiddleNode(Node*head){
    Node*slow=head;
    Node*fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}