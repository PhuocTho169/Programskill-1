// Largest Perimeter Triangle
#include<iostream>
#include<algorithm>
using namespace std;
int largestperimeter(int* arr, int n) {
    sort(arr, arr + n, greater<int>()); 
    for (int i = 0; i < n - 2; i++) {
        if (arr[i] < arr[i + 1] + arr[i + 2]) {
            return arr[i] + arr[i + 1] + arr[i + 2];
        }
    }
    return 0;
}

void input(int* arr, int n) {
    cout << "Nhap cac phan tu:\n";
    for (int i = 0; i < n; i++) {
        cout << "Phan tu thu " << i + 1 << ": ";
        cin >> arr[i];
    }
}

void output(int* arr, int n) {
    cout << "Cac phan tu cua mang: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;

    if (n < 3) {
        cout << "Can it nhat 3 phan tu de tao thanh tam giac.\n";
        return 0;
    }

    int* arr = new int[n];

    input(arr, n);
    output(arr, n);

    int result = largestperimeter(arr, n);

    if (result > 0) {
        cout << "Chu vi tam giac lon nhat la: " << result << endl;
    } else {
        cout << "Khong the tao thanh mot tam giac hop le.\n";
    }

    delete[] arr;
    return 0;
}
