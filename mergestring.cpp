#include<iostream>
#include<vector>
using namespace std;
string solve(string a,string b){
    string result="";
    int i=0;
    int j=0;
    while(i<a.size() && j<b.size()){
        result+=a[i++];
        result+=b[j++];
    }
    while(i<a.size()){
        result+=a[i++];
    }
    while(j<b.size()){
        result+=b[j++];
    }
    return result;

    
}
int main(){
    string a;
    getline(cin,a);
    string b;
    getline(cin,b);
    string ketqua=solve(a,b);
    cout<<ketqua<<endl;
    a.append(b);
    cout<<a<<endl;
    return 0;
    
}