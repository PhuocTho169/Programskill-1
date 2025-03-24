//Maximum Depth of Binary Tree
#include<iostream>
#include<stack>
using namespace std;
struct Node{
    int data;
    Node*left;
    Node*right;
};
Node*MakeNode(int value){
    Node*newNode=new Node();
    Node*data->value;
    Node*left->NULL;
    Node*right->NULL;
    return newNode;
}
Node*insert(Node*root,int x){
    if(root==NULL){
        return newNode(x);
    }else if(x<root->data){
        root->left=insert(root->left,x);
    }else{
        root->right=insert(root->right,x);
    }
    return root;
}
int solve(Node*head){
    int depth=0;
    if(head==NULL){
        return depth;
    }
    int leftdepth=solve(head->left);
    int rightdepth=solve(head->right);
    return 1+max(leftdepth,rightdepth);
}
