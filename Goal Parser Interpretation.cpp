#include<iostream>
#include<vector>
using namespace std;
string solve(string a){
    string result="";
    int n=a.size();
    for(int i=0;i<n;){
        if(a[i]=='G'){
            result+="G";
            i++;
        }else if(a[i]=='(' && a[i+1]==')'){
            result+="0";
            i+=2;
        }else if(a[i]=='(' && a[i+1]=='a'){ 
            result+="al";
            i+=4;
        }
    }
    return result;
}
int main(){
    string a;
    getline(cin,a);
    string ketqua=solve(a);
    cout<<ketqua;
    return 0;
}