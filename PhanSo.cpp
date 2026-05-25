#include <iostream>
#include "PhanSo.h"
using namespace std;

// Ham tim uoc chung lon nhat (UCLN) bang de quy Euclid
// Input : hai so nguyen duong a, b
// Output: UCLN(a, b)
// Giai thuat: UCLN(a,0)=a; UCLN(a,b)=UCLN(b, a%b)
int UCLN(int a, int b) {
    if (b == 0) return a;
    return UCLN(b, a % b);
}

// Input : Nguoi dung nhap tu so va mau so tu ban phim
// Output: iTu, iMau duoc gan gia tri, dam bao iMau != 0
// Giai thuat: Nhap iTu binh thuong; vong lap do-while
//             yeu cau nhap lai iMau cho den khi khac 0
void PhanSo::Nhap() {
    cout << "Nhap tu: ";
    cin >> iTu;
    do {
        cout << "Nhap mau (khac 0): ";
        cin >> iMau;
    } while (iMau == 0);
}

// Input : Khong co tham so
// Output: In ra man hinh dang iTu/iMau (vd: 1/2)
void PhanSo::Xuat() {
    cout << iTu << "/" << iMau;
}

// Input : Khong co tham so
// Output: iTu, iMau duoc toi gian, dau luon nam o tu so
// Giai thuat: Chia ca tu va mau cho UCLN(|tu|,|mau|);
//             neu mau am thi chuyen dau sang tu
void PhanSo::RutGon() {
    int ucln = UCLN(abs(iTu), abs(iMau));
    iTu  /= ucln;
    iMau /= ucln;
    if (iMau < 0) { iTu = -iTu; iMau = -iMau; }
}

// Input : PhanSo ps – phan so thu hai
// Output: Tra ve phan so = this + ps da rut gon
// Giai thuat: a/b + c/d = (a*d + c*b) / (b*d), rut gon ket qua
PhanSo PhanSo::Tong(PhanSo ps) {
    PhanSo kq;
    kq.iTu  = iTu * ps.iMau + ps.iTu * iMau;
    kq.iMau = iMau * ps.iMau;
    kq.RutGon();
    return kq;
}

// Input : PhanSo ps – phan so thu hai
// Output: Tra ve phan so = this - ps da rut gon
// Giai thuat: a/b - c/d = (a*d - c*b) / (b*d), rut gon ket qua
PhanSo PhanSo::Hieu(PhanSo ps) {
    PhanSo kq;
    kq.iTu  = iTu * ps.iMau - ps.iTu * iMau;
    kq.iMau = iMau * ps.iMau;
    kq.RutGon();
    return kq;
}

// Input : PhanSo ps – phan so thu hai
// Output: Tra ve phan so = this * ps da rut gon
// Giai thuat: a/b * c/d = (a*c) / (b*d), rut gon ket qua
PhanSo PhanSo::Tich(PhanSo ps) {
    PhanSo kq;
    kq.iTu  = iTu * ps.iTu;
    kq.iMau = iMau * ps.iMau;
    kq.RutGon();
    return kq;
}

// Input : PhanSo ps – phan so thu hai (ps.iTu != 0)
// Output: Tra ve phan so = this / ps da rut gon
// Giai thuat: a/b / c/d = (a*d) / (b*c), rut gon ket qua
PhanSo PhanSo::Thuong(PhanSo ps) {
    PhanSo kq;
    kq.iTu  = iTu  * ps.iMau;
    kq.iMau = iMau * ps.iTu;
    kq.RutGon();
    return kq;
}

// Input : PhanSo ps – phan so can so sanh
// Output: 1 neu this > ps, 0 neu bang nhau, -1 neu nho hon
// Giai thuat: So sanh cheo: a/b vs c/d => so sanh a*d voi c*b
//             (hop le khi b,d > 0 sau khi rut gon)
int PhanSo::SoSanh(PhanSo ps) {
    int left  = iTu  * ps.iMau;
    int right = ps.iTu * iMau;
    if (left > right) return  1;
    if (left == right) return 0;
    return -1;
}
