#include <iostream>
#include "NgayThangNam.h"
using namespace std;

int main() {
    NgayThangNam ngay;
    cout << "Nhap ngay thang nam:\n";
    ngay.Nhap();
    cout << "Ngay da nhap: ";
    ngay.Xuat();
    cout << "\nNgay tiep theo: ";
    ngay.NgayThangNamTiepTheo();
    ngay.Xuat();
    cout << endl;
    return 0;
}
