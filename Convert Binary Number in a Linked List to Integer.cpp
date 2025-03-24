//Convert Binary Number in a Linked List to Integer
#include<iostream>
#include<stack>
using namespace std;
struct Node{
    int data;
    Node*next;
    Node(int x) : data(x),next(NULL){}
    // Node(int x){
        //data=x;
        //next=NULL;
    //}
};
int solve(Node*head){
    stack<int>st;
    while(head!=NULL){
    st.pushback(head->data);
    head=head->next;
    }
    int result=0;
    int base=1;
    while(!st.empty()){
        int bit=st.top();st.pop();
        result+=bit*base;
        base*=2;
    }
    return result;
}
