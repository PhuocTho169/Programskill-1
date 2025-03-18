//Number of 1 Bits
#include<iostream>
using namespace std;
int countbit(int n,int count=0){
    if(n==0) return count;
    return  countbit(n>>=1,count+(n&1));
}
int main(){
    unsigned n;
    cin>>n;
    int bit=countbit(n);
    cout<<"bit"<<bit;
    return 0;
}
