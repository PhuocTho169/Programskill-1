#include<iostream>
#include<vector>
using namespace std;
struct Point {
    int x;
    int y;
};
bool solve(vector<Point>& p) {

    int dx = p[1].x - p[0].x;
    int dy = p[1].y - p[0].y;
    for (int i = 2; i < p.size(); i++) {
        int currdx = p[i].x - p[1].x;
        int currdy = p[i].y - p[1].y;

        if (dy * currdx != dx * currdy) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Nhap so diem: ";
    cin >> n;
    if (n < 2) {
        cout << "Can it nhat 2 diem de kiem tra!" << endl;
        return 0;
    }

    vector<Point> p; 

    cout << "Nhap toa do x va y cho tung diem:" << endl;
    for (int i = 0; i < n; i++) {
        Point points;
        cin >> points.x >> points.y;
        p.push_back(points);
    }
    if (solve(p)) {
        cout << "Tat ca cac diem nam tren mot duong thang!" << endl;
    } else {
        cout << "Cac diem khong nam tren mot duong thang!" << endl;
    }

    return 0;
}
