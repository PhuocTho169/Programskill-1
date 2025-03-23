#include<iostream>
#include<string>
using namespace std;
string solve(string a){
    int n=a.size();
    for(int i=0;i<n;i++){
        if(a[i]>='A'&& a[i]<='Z'){
            a[i]+=32;
        }
    }
    return a;

}
int main(){
    string a;
    getline(cin,a);
    string result=solve(a);
    cout<<result<<endl;
    return 0;
}