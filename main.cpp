#include <iostream>
#include "PhanSo.h"
using namespace std;

int main() {
    PhanSo a, b;
    // Nhap hai phan so
    cout << "Nhap phan so A:\n";
    a.Nhap();
    cout << "Nhap phan so B:\n";
    b.Nhap();

    // Rut gon truoc khi hien thi
    a.RutGon();
    b.RutGon();
    cout << "\nPhan so A: ";
    a.Xuat();
    cout << "\nPhan so B: ";
    b.Xuat();

    // Tinh toan va in ket qua
    PhanSo tong   = a.Tong(b);
    PhanSo hieu   = a.Hieu(b);
    PhanSo tich   = a.Tich(b);
    PhanSo thuong = a.Thuong(b);
    cout << "\nTong A+B   : "; tong.Xuat();
    cout << "\nHieu A-B   : "; hieu.Xuat();
    cout << "\nTich A*B   : "; tich.Xuat();
    cout << "\nThuong A/B : "; thuong.Xuat();

    // So sanh
    int cmp = a.SoSanh(b);
    if      (cmp == 1) cout << "\nA > B";
    else if (cmp == 0) cout << "\nA = B";
    else               cout << "\nA < B";
    cout << endl;
    return 0;
}
