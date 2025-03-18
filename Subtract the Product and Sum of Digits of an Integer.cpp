//Subtract the Product and Sum of Digits of an Integer
#include<iostream>
using namespace std;
int solve(int n){
    int product=1;
    int sum=0;
    while(n>0){
        int digit=n&10;
        product*=digit;
        sum+=digit;
        n/=10;
    }
    return sum+product;
}
int main(){
    int n;
    cin>>n;
    int result=solve(n);
    cout<<"ket qua la "<<result<<endl;
    return 0;
}