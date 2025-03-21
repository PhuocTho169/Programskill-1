#include<iostream>
#include<vector>
using namespace std;
int solve(vector<vector<int>> &accounts){    
    //vector<> la mot hang
    //vector<vector<>> la mot ma tran 
    int n=accounts.size();
    int maxweath=0;
    for(int i=0;i<n;i++){
        int sum=0;
        int m=accounts[i].size();
        for(int j=0;j<m;j++){
            sum+=accounts[i][j];
        }
        if(sum>maxweath){
            maxweath=sum;
        }
    }
    return maxweath;

}