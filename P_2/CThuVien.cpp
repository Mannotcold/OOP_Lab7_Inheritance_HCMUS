#include "CThuVien.h"

ThuVien::ThuVien()
    {
        ListSach.push_back(new Sach("Lap Trinh Huong Doi Tuong", "Tran Dan Thu", 2005, 100000));
        ListSach.push_back(new Sach("Nhap Mon Lap Trinh", "Dinh Ba Tien", 2005, 100000));
    }

ThuVien::ThuVien(const ThuVien& tv)
    {

        for (int i = 0;i < tv.ListSach.size();++i)
        {
            ListSach.push_back(new Sach(*tv.ListSach[i]));
        }

    }

ThuVien::~ThuVien()
    {
        ListSach.clear();
    }

    vector <Sach*> ThuVien::GetListSach()
    {
        return ListSach;
    }

    void ThuVien::SetListSach(vector<Sach*> ListS)
    {
        for (Sach* sach : ListSach)
        {
            delete sach;
            sach = NULL;
        }
        ListSach.clear();

        for (int i = 0;i < ListS.size();++i)
        {
            ListSach.push_back(new Sach(*ListS[i]));
        }
    }

    void ThuVien::SachList()
    {
        cout << "\nDanh sach cac loai sach co trong thu vien :\n ";
        for (Sach* s : ListSach)
        {
            cout << s->GetTenSach() << ", ";
            cout << s->GetTacGia() << ", ";
            cout << s->GetNamXB() << ", ";
            cout << s->GetGia() << "\n";
        }
    }

    void ThuVien::ThemSach()
    {
        Sach s;
        s.NhapSach();
        ListSach.push_back(new Sach(s));
    }