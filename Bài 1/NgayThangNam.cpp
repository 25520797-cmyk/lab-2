#include <iostream>
#include "NgayThangNam.h"
using namespace std;

// Kiem tra nam nhuan
bool NgayThangNam::NamNhuan(int nam) {
    return (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);
}

// So ngay trong thang
int NgayThangNam::SoNgayTrongThang(int thang, int nam) {
    int soNgay[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (thang == 2 && NamNhuan(nam)) return 29;
    return soNgay[thang - 1];
}

// Input: Nguoi dung nhap ngay, thang, nam tu ban phim
// Output: iNgay, iThang, iNam duoc gan gia tri hop le
// Giai thuat: Kiem tra dieu kien hop le, yeu cau nhap lai neu sai
void NgayThangNam::Nhap() {
    do {
        cout << "Nhap ngay (1-31): ";
        cin >> iNgay;
    } while (iNgay < 1 || iNgay > 31);
    do {
        cout << "Nhap thang (1-12): ";
        cin >> iThang;
    } while (iThang < 1 || iThang > 12);
    do {
        cout << "Nhap nam (> 0): ";
        cin >> iNam;
    } while (iNam <= 0);
}

// Input: Khong co tham so
// Output: In ra man hinh dd/mm/yyyy
void NgayThangNam::Xuat() {
    cout << iNgay << "/" << iThang << "/" << iNam;
}

// Input: Khong co tham so
// Output: Cap nhat iNgay, iThang, iNam sang ngay ke tiep
// Giai thuat: Tang ngay, neu qua so ngay trong thang thi tang thang,
//             neu qua thang 12 thi tang nam
void NgayThangNam::NgayThangNamTiepTheo() {
    iNgay++;
    if (iNgay > SoNgayTrongThang(iThang, iNam)) {
        iNgay = 1;
        iThang++;
        if (iThang > 12) {
            iThang = 1;
            iNam++;
        }
    }
}
