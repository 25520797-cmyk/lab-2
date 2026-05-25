#include <iostream>
#include "SoPhu.h"
using namespace std;

int main() {
    SoPhu a, b;
    cout << "Nhap so phuc A:\n";
    a.Nhap();
    cout << "Nhap so phuc B:\n";
    b.Nhap();
    cout << "\nSo phuc A: ";
    a.Xuat();
    cout << "\nSo phuc B: ";
    b.Xuat();
    SoPhu tong    = a.Tong(b);
    SoPhu hieu    = a.Hieu(b);
    SoPhu tich    = a.Tich(b);
    SoPhu thuong  = a.Thuong(b);
    cout << "\nTong: ";    tong.Xuat();
    cout << "\nHieu: ";    hieu.Xuat();
    cout << "\nTich: ";    tich.Xuat();
    cout << "\nThuong: ";  thuong.Xuat();
    cout << endl;
    return 0;
}
