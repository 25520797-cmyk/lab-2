#include <iostream>
#include "GioPhutGiay.h"
using namespace std;

// Input: Nguoi dung nhap gio, phut, giay tu ban phim
// Output: iGio, iPhut, iGiay duoc gan gia tri hop le
// Giai thuat: Kiem tra rang buoc, nhap lai neu sai
void GioPhutGiay::Nhap() {
    do {
        cout << "Nhap gio (0-23): ";
        cin >> iGio;
    } while (iGio < 0 || iGio > 23);
    do {
        cout << "Nhap phut (0-59): ";
        cin >> iPhut;
    } while (iPhut < 0 || iPhut > 59);
    do {
        cout << "Nhap giay (0-59): ";
        cin >> iGiay;
    } while (iGiay < 0 || iGiay > 59);
}

// Input: Khong co tham so
// Output: In ra man hinh hh:mm:ss
void GioPhutGiay::Xuat() {
    // In co dinh 2 chu so, them 0 phia truoc neu can
    if (iGio < 10) cout << "0";
    cout << iGio << ":";
    if (iPhut < 10) cout << "0";
    cout << iPhut << ":";
    if (iGiay < 10) cout << "0";
    cout << iGiay;
}

// Input: Khong co tham so
// Output: Cap nhat iGiay, iPhut, iGio them 1 giay
// Giai thuat: Tang giay, neu >= 60 thi tang phut, neu phut >= 60 thi tang gio,
//             neu gio >= 24 thi dat lai gio=0 (sang ngay moi)
void GioPhutGiay::TinhCongThemMotGiay() {
    iGiay++;
    if (iGiay >= 60) {
        iGiay = 0;
        iPhut++;
        if (iPhut >= 60) {
            iPhut = 0;
            iGio++;
            if (iGio >= 24) {
                iGio = 0;
            }
        }
    }
}
