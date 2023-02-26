#pragma once
#include <iostream>
using namespace std;

class Diem
{
private:
    int x, y;
public:
    Diem();
    ~Diem();
    void NhapToaDo();
    void XuatToaDo();
    float GetX();
    float GetY();
    float KhoanCach(Diem a, Diem b);
};





