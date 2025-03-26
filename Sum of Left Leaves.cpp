#include<iostream>
using namespace std;
struct Node{
    int data;
    Node*left;
    Node*right;

};
Node* MakeNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
Node*insert(Node*root,int x){
    if(root==NULL){
        return MakeNode(x);
    }else if(x<root->data){
        root->left=insert(root->left,x);
    }else{
        root->right=insert(root->right,x);
    }
    return root;
}
int solve(Node*root){
    if(!root){
        return 0;
    }
    int sum=0;
    if(root->left && !root->left->left && !root->left->right){ 
        // kiem tra root co phai la nut trai ko
        //!root->left->left && !root->left->right
        //kiem tra root->left co phai la mot nut hay ko
        //neu 
        //--root->left->left=NULL thi ko co con trai 
        //--root->left->right=NULL thi ko co con phai
        sum+=root->left->data;
    }
    sum+=solve(root->left);
    sum+=solve(root->right);
    return sum;
}
int main() {
    Node* root = NULL;
    root = insert(root, 10);
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 2);
    root = insert(root, 7);
    root = insert(root, 12);
    root = insert(root, 20);
    
    cout << "Sum of left leaves: " << solve(root) << endl;
    
    return 0;
}