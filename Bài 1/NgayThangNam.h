#ifndef NGAYTHANGNAM_H
#define NGAYTHANGNAM_H

class NgayThangNam {
private:
    int iNgay;
    int iThang;
    int iNam;

    bool NamNhuan(int nam);
    int SoNgayTrongThang(int thang, int nam);

public:
    void Nhap();
    void Xuat();
    void NgayThangNamTiepTheo();
};

#endif
