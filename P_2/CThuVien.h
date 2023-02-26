#pragma once

#include"CSach.h"
class ThuVien
{
private:
    vector<Sach*>ListSach;
public:
    ThuVien();
    ThuVien(const ThuVien& tv);
    ~ThuVien();
    vector <Sach*> GetListSach();
    void SetListSach(vector<Sach*> ListS);
    void SachList();
    void ThemSach();
};
