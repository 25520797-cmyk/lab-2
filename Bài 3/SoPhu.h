#ifndef SOPHU_H
#define SOPHU_H
#include <iostream>
using namespace std;

class SoPhu {
private:
    double iThuc;
    double iAo;

public:
    void Nhap();
    void Xuat();
    SoPhu Tong(SoPhu sp);
    SoPhu Hieu(SoPhu sp);
    SoPhu Tich(SoPhu sp);
    SoPhu Thuong(SoPhu sp);
};

#endif
