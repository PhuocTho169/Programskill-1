//Sum of All Odd Length Subarrays
#include<iostream>
#include<vector>
using namespace std;
int solve(vector<int>& arr){
    int n=arr.size();
    int res=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            int length=j-i+1; // lenght of subarray 
            if(length%2!=0){
                res+=sum;
            }
        }
    
    }
    return res;
}