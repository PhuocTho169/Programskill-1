#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int numberofbits(int n,int count){
    if(n==0){
        return count;
    }
    return numberofbits(n>>=1,count+(n&1));
}
vector<int> sovle(vector<int>&arr){
    sort(arr.begin(),arr.end(),[](int a,int b){
        int counta=numberofbits(a);
        int countb=numberofbits(b );
     if(counta==counnt){ // cach 1
        return a<b;
    }else{
        return counta<countb;
    }
    return counta==countb?a<b:counta<countb; // cach 2
    });
    return arr;
}