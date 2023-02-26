#include "CHV.h"
HV::HV()
{
    ABCD;
};


HV::~HV() {};
void HV::NhapHV()
{
    ABCD.NhapHCN();

}
void HV::XuatHV()
{
    ABCD.XuatHCN();
}
void HV::KiemTraHV()
{
    if (ABCD.KiemTraCanhKe() == true && ABCD.KiemTraHCN() == true)
        cout << "Toa do nhap vao la hinh vuong ";
    else
        cout << "Toa do nhap vao la khong la hinh vuong";
}

void HV::ChuViHV()
{
    cout << ABCD.ChuVi();
}

void HV::DienTichHV() {
    cout << ABCD.DienTich();
}