//Average Salary Excluding the Minimum and Maximum Salary
#include<iostream>
#include<algorithm>
using namespace std;
double Averagesalary(int*arr,int n){
    if(n<=2) return 0;
    int minarr=arr[0];
    int maxarr=arr[0];
    int total=0;
    for(int i=0;i<n;i++){
        minarr=min(minarr,arr[i]);
        maxarr=max(maxarr,arr[i]);
        total+=arr[i];
    }
    total-=(minarr+maxarr);
    return (double)total/(n-2);
}
void input(int*arr,int n){
    cout<<"nhap cac phan tu cua mang ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
void output(int*arr,int n){
    cout<<"mang sau khi nhap la ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int*arr=new int[n];
    input(arr,n);
    output(arr,n);
    double avg=Averagesalary(arr,n);
    cout<<"trung binh sau khi tru min max la "<<avg<<endl;
    delete[] arr;
    return 0;
}