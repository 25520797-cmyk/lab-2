#include <iostream>
#include "SoPhu.h"
#include <cmath>
using namespace std;

// Input: Nguoi dung nhap phan thuc va phan ao tu ban phim
// Output: iThuc va iAo duoc gan gia tri
void SoPhu::Nhap() {
    cout << "Nhap phan thuc: ";
    cin >> iThuc;
    cout << "Nhap phan ao: ";
    cin >> iAo;
}

// Input: Khong co tham so
// Output: In so phuc dang a+bi hoac a-bi
void SoPhu::Xuat() {
    cout << iThuc;
    if (iAo >= 0) cout << " + " << iAo << "i";
    else cout << " - " << -iAo << "i";
}

// Input: SoPhu sp
// Output: Tra ve tong hai so phuc
// Giai thuat: (a+bi) + (c+di) = (a+c) + (b+d)i
SoPhu SoPhu::Tong(SoPhu sp) {
    SoPhu kq;
    kq.iThuc = iThuc + sp.iThuc;
    kq.iAo   = iAo   + sp.iAo;
    return kq;
}

// Input: SoPhu sp
// Output: Tra ve hieu hai so phuc
// Giai thuat: (a+bi) - (c+di) = (a-c) + (b-d)i
SoPhu SoPhu::Hieu(SoPhu sp) {
    SoPhu kq;
    kq.iThuc = iThuc - sp.iThuc;
    kq.iAo   = iAo   - sp.iAo;
    return kq;
}

// Input: SoPhu sp
// Output: Tra ve tich hai so phuc
// Giai thuat: (a+bi)*(c+di) = (ac-bd) + (ad+bc)i
SoPhu SoPhu::Tich(SoPhu sp) {
    SoPhu kq;
    kq.iThuc = iThuc * sp.iThuc - iAo * sp.iAo;
    kq.iAo   = iThuc * sp.iAo   + iAo * sp.iThuc;
    return kq;
}

// Input: SoPhu sp
// Output: Tra ve thuong hai so phuc
// Giai thuat: (a+bi)/(c+di) = [(ac+bd)/(c^2+d^2)] + [(bc-ad)/(c^2+d^2)]i
SoPhu SoPhu::Thuong(SoPhu sp) {
    SoPhu kq;
    double mau = sp.iThuc * sp.iThuc + sp.iAo * sp.iAo;
    kq.iThuc = (iThuc * sp.iThuc + iAo * sp.iAo) / mau;
    kq.iAo   = (iAo * sp.iThuc - iThuc * sp.iAo) / mau;
    return kq;
}
