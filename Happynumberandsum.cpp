#include<iostream>
#include<cmath>
using namespace std;
int sumofsquare(int n){
    int slow=n;
    int fast=n;
    do{
        slow=sumofsquare(slow);
        fast=sumofsquare(sumofsquare(fast));
    } while(slow!=fast);
    return slow==1;
}
int happynumber(int n){
    if(n<=0){
        return 0;
    }
    int sum=0;
    while(n>0){
        int digit=n%10;
        sum+=digit*digit;
        n/=10;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    if(happynumber(n)){
        cout<<n<<"is a happynumber"<<endl;
    }else{
        cout<<n<<"is not a happy number"<<endl;
    }
    int result=happynumber(n);
    cout<<"the result is"<<result<<endl;
    return 0;
 }
