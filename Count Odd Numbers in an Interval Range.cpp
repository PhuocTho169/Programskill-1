//Count Odd Numbers in an Interval Range
#include<iostream>
using namespace std;
int countodds(int low,int right){
    return (right+1)/2-(low)/2;
}
int main(){
    int low,right;
    cin>>low>>right;
    cout<<countodds(low,right);
    return 0;
}