#pragma once
#include"CDiem.h"
class HCN
{
private:
    Diem A, B, C, D;
public:
    HCN();
    HCN(Diem newA, Diem newB, Diem newC, Diem newD);
    ~HCN();
    void NhapHCN();
    void XuatHCN();
    bool KiemTraHCN();
    bool KiemTraCanhKe();
    float ChuVi();
    float DienTich();
};
