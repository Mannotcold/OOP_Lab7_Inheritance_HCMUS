#include "CSach.h"

Sach::Sach()
    {
        TenSach = "";
        TacGia = "";
        NamXB = 0;
        Gia = 0;
    }
Sach::Sach(string newTenSach, string newTacGia, int newNamXB, float newGia)
    {
        TenSach = newTenSach;
        TacGia = newTacGia;
        NamXB = newNamXB;
        Gia = newGia;
    }

Sach::Sach(const Sach& s)
    {
        TenSach = s.TenSach;
        TacGia = s.TacGia;
        NamXB = s.NamXB;
        Gia = s.Gia;
    }

    string Sach::GetTenSach()
    {
        return TenSach;
    }
    string Sach::GetTacGia()
    {
        return TacGia;
    }
    int Sach::GetNamXB()
    {
        return NamXB;
    }

    float Sach::GetGia()
    {
        return Gia;
    }

    void Sach::SetTenSach(string newTenSach)
    {
        TenSach = newTenSach;
    }
    void Sach::SetTacGia(string newTacGia)
    {
        TacGia = newTacGia;
    }
    void Sach::SetNamXB(int newNamXB)
    {
        NamXB = newNamXB;
    }

    void Sach::GetGia(float newGia)
    {
        Gia = newGia;
    }
    void Sach::NhapSach()
    {
        cin.ignore();
        cout << "Nhap ten sach : ";
        getline(cin, TenSach);
        cout << "Nhap tac gia : ";
        getline(cin, TacGia);
        cout << "Nhap nam xuat ban : ";
        cin >> NamXB;
        cout << "Nhap gia cua sach : ";
        cin >> Gia;
        cin.ignore();
    }

    void Sach::XuatSach()
    {
        cout << "Ten sach : ";
        cout << TenSach;
        cout << "Tac gia : ";
        cout << TacGia;
        cout << "Nam xuat ban : ";
        cout << NamXB;
        cout << "Gia cua sach : ";
        cout << Gia;
    }