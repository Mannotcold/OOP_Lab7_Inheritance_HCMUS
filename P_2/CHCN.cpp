#include "CHCN.h"

HCN::HCN()
{
    A, B, C, D;
};

HCN::HCN(Diem newA, Diem newB, Diem newC, Diem newD)
{
    A = newA;
    B = newB;
    C = newC;
    D = newD;
};

HCN::~HCN() {};

void HCN::NhapHCN()
{
    cout << "\nNhap 4 diem theo chieu kim dong ho: ";
    cout << "\nNhap dinh A: ";
    A.NhapToaDo();
    cout << "\nNhap dinh B: ";
    B.NhapToaDo();
    cout << "\nNhap dinh C: ";
    C.NhapToaDo();
    cout << "\nNhap dinh D: ";
    D.NhapToaDo();

}

void HCN::XuatHCN()
{
    cout << "\nToa do cua dinh A la: ";
    A.XuatToaDo();
    cout << "\nToa do cua dinh B la: ";
    B.XuatToaDo();
    cout << "\nToa do cua dinh C la: ";
    C.XuatToaDo();
    cout << "\nToa do cua dinh D la: ";
    D.XuatToaDo();
}

bool HCN::KiemTraHCN()
{
    if (A.GetY() != B.GetY())
        return false;
    else if (B.GetX() != C.GetX())
        return false;
    else if (C.GetY() != D.GetY())
        return false;
    else if (D.GetX() != A.GetX())
        return false;
    else
        return true;

}
bool HCN::KiemTraCanhKe()
{
    if (A.KhoanCach(A, B) == A.KhoanCach(A, D))
        return true;
    else
        return false;
}


float HCN::ChuVi()
{
    return (A.KhoanCach(A, B) + B.KhoanCach(B, C)) * 2;
}

float HCN::DienTich()
{
    return A.KhoanCach(A, B) * B.KhoanCach(B, C);
}