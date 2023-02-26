#include "CDiem.h"

Diem::Diem()
{
    x = 0;
    y = 0;
}
Diem::~Diem() {};
void Diem::NhapToaDo() {
    cout << "\nNhap hoanh do: ";
    cin >> x;
    cout << "\nNhap tung do: ";
    cin >> y;
}

void Diem::XuatToaDo()
{
    cout << "(" << x << "," << y << ")";
}

float Diem::GetX() {
    return x;
}
float Diem::GetY() {
    return y;
}

float Diem::KhoanCach(Diem A, Diem B)
{
    return (float)sqrt((B.GetX() - A.GetX()) * (B.GetX() - A.GetX()) + (B.GetY() - A.GetY()) * (B.GetY() - A.GetY()));
}

