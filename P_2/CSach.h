#pragma once

#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Sach
{
private:
    string TenSach;
    string TacGia;
    int NamXB;
    float Gia;
public:
    Sach();
    Sach(string newTenSach, string newTacGia, int newNamXB, float newGia);
    Sach(const Sach& s);
    string GetTenSach();
    string GetTacGia();
    int GetNamXB();
    float GetGia();
    void SetTenSach(string newTenSach);
    void SetTacGia(string newTacGia);
    void SetNamXB(int newNamXB);
    void GetGia(float newGia);
    void NhapSach();
    void XuatSach();
};

