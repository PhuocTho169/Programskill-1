#include<iostream>
#include<unordered_map>
#include<stack>
using namespace std;
class Solution {
    public: 
    int*solve(int *arr1,int arr1size,int *arr2,int arr2size){
        unordered_map<int,int> m; // anh xa kieu int den gia tri int
        stack<int> st;
        for(int i=arr2size-1;i>=0;i--){
            int a=arr2[i];
            while(!st.empty() && st.top()<=a){
                st.pop();
            }
        m[a]=st.empty()?-1:st.top();
        st.push(a);
        }
        int *result= new int[arr1size];
        for(int i=0;i<arr1size;i++){
            result[i]=m[arr1[i]];
        }
        return result;
    }
};
int main() {
    Solution solution;

    int arr1[] = {4, 1, 2};
    int arr2[] = {1, 3, 4, 2};
    int arr1size = sizeof(arr1) / sizeof(arr1[0]);
    int arr2size = sizeof(arr2) / sizeof(arr2[0]);

    int* result = solution.solve(arr1, arr1size, arr2, arr2size);

    cout << "Next Greater Elements: ";
    for (int i = 0; i < arr1size; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    delete[] result; // Free dynamically allocated memory
    return 0;
}
