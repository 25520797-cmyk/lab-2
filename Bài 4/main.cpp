#include <iostream>
#include "GioPhutGiay.h"
using namespace std;

int main() {
    GioPhutGiay tg;
    cout << "Nhap thoi gian:\n";
    tg.Nhap();
    cout << "Thoi gian hien tai: ";
    tg.Xuat();
    cout << "\nSau khi cong them 1 giay: ";
    tg.TinhCongThemMotGiay();
    tg.Xuat();
    cout << endl;
    return 0;
}
