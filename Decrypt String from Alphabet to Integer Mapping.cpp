#include<iostream>
using namespace std;
#include<string>
string solve(string a){
    string result="";
    int n=a.size();
    for(int i=0;i<n;){
        if(i+2<n && a[i+2]=='#'){
            int num=(a[i]-'0')*10+(a[i+1]-'0');
            result+=char(num+96);
            i+=3;
        }else{
            int num=(a[i]-'0');
            result+=char(num+96);
            i+=1;
        }
    }
    return result;
}   
int main(){
    string a;
    getline(cin,a);
    string ketqua=solve(a);
    cout<<ketqua<<endl;
    return 0;
}
