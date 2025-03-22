#include<iostream>
#include<vector>
using namespace std;
void solve(vector<vector<int>> &a,vector<vector<int>> &b){
    int n=a.size();   // so hang cot a 
    int p=a[0].size();  // so cot cua a
    int m=b[0].size();   //  so cot cua b 
    vector<vector<int>> result(n,vector<int>(m,0)); // tao ma tren ket qua n x  m
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            for(int k=0;k<p;k++){
                result[i][j]+=a[i][k]*b[j][k];
            }
        }
    }
    cout<<"product  of matrix: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<result[i][j]<<" ";
        }
    }
}
// with out using vector 
void diagonalsum(int **arr,int n){
    int c=0;
    int d=0;
    for(int i=0;i<n;i++){
        c+=arr[i][i]; // duong cheo chinh 
        d+=arr[i][n-i-1]; // duong cheo phu 
    }
    cout<<c<<endl;
    cout<<d<<endl;
}