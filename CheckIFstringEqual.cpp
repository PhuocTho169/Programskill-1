#include<iostream>
#include<string>
using namespace std;
string solve(string a,string b){
    if(a==b) return "true";
    if(a.size()!=b.size()) return "false";
    int count=0;
    int first=-1;
    int second=-1;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i]){
            count++;
            if(count>2) return "false";
            if(first==-1) first=i;
            else second=i;
        }
    }
    if(count!=2) return "false";
        swap(a[first],a[second]);
        if(a==b) return "true";
        else return "false";
}
int main(){
    string a;
    getline(cin,a);
    string b;
    getline(cin,b);
    string result=solve(a,b);
    cout<<result<<endl;
    return 0;
}