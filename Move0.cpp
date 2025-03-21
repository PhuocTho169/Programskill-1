// Move Zeroes - dich chuyen cac so ko ra o cuoi mang
#include<iostream>
#include<vector>
using namespace std;
void solve(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            for(int j=i+1;j<n;j++){
                if(arr[j]!=0){
                    swap(arr[i],arr[j]);
                    break;
                }
            }
        }
    }
}
// cái trên là số 0 đi đẩy xuống dưới còn dưới đây là 0 được đẩy lên trên  
void solve2(vector<int>&arr){
    int n=arr.size();
    int index=n-1;
    for(int i=n-1;i<n;i++){
        if(arr[i]!=0){
            arr[i]=arr[index];
            index--;
        }
    }    
        while (arr[index]>=0){
            arr[index]=0;
            index--;

        }
    }