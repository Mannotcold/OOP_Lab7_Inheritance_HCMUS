#include"CDiem.h"
#include"CHCN.h"
#include"CHV.h"
#include"CDiem.h"
#include"CThuVien.h"

void Thuvien();
void Hinh();

int main()
{
    int choice;

    while (1) {
        system("cls");
        cout << "\n------------------------MENU------------------------------\n";
        cout << "\n1 -  Bai hinh vuong - hinh chu nhat   ";
        cout << "\n2 -  Bai thu vien - sach ";
        cout << "\n3 - Thoat!";
        cout << "\n---------------------------------------------------------";
        cout << "\nNhap lua chon cua ban: ";
        cin >> choice;
        system("cls");

        switch (choice) {
        case 1:
            Hinh();
            break;
        case 2:
            Thuvien();
            break;
        case 3:
        {
            return 0;
        }

        }
    }
}

void Hinh()
{
    int choice;
    HCN a;
    HV b;
    
    while (1) {
        system("cls");
        cout << "\n------------------------MENU------------------------------\n";
        cout << "\n1 -  Nhap, Xuat 4 diem hinh chu nhat ";
        cout << "\n2 -  Kiem tra hinh chu nhat ";
        cout << "\n3 -  Tinh chu vi, dien tich ";
        cout << "\n4 -  Nhap, xuat 4 diem hinh vuong ";
        cout << "\n5 -  Kiem tra hinh vuong ";
        cout << "\n6 -  Tinh chu vi, dien tich ";
        cout << "\n7 -  Quay lai ";
        cout << "\n---------------------------------------------------------";
        cout << "\nNhap lua chon cua ban: ";
        cout << endl << endl;
        cin >> choice;
        cout << endl;
        system("cls");
        switch (choice) {
        case 1: {
            a.NhapHCN();
            a.XuatHCN();
            break;
        }
        case 2: {
            if (a.KiemTraHCN() == true)
                cout << "Toa do ban nhap la hinh chu nhat ";
            else
                cout << "Toa do ban nhap khong phai la hinh chu nhat";

            cout << endl;
            break;
        }
        case 3: {
            cout << "Chu vi: " << a.ChuVi() << endl;
            cout << "Dien tich : " << a.DienTich();

            cout << endl;
            break;
        }
        case 4: {
            b.NhapHV();
            b.XuatHV();
            cout << endl;
            break;
        }
        case 5: {
            b.KiemTraHV();
            cout << endl;
            break;
        }
        case 6: {
            cout << "Chu vi: ";
             b.ChuViHV();
             cout << "\nDien tich : ";
             b.DienTichHV();
             cout << endl;
            break;
        }
        case 7:
            return;
        }
        system("pause");
    }
}

void Thuvien()
{
    
    int choice;
    ThuVien a;
   
    while (1) {
        system("cls");
        cout << "\n------------------------MENU------------------------------\n";
        cout << "\n1 -  Them sach vao thu vien ";
        cout << "\n2 - In ra cac loai sach co trong thu vien!";
        cout << "\n3 - Quay lai";
        cout << "\n---------------------------------------------------------";
        cout << "\nNhap lua chon cua ban: ";
        cout << endl << endl;
        cin >> choice;
        cout << endl;
        system("cls");
        switch (choice) {
        case 1: {
            a.ThemSach();
            break;
        }
        case 2: {
            a.SachList();
            break;
        }
        case 3:
            return;
       
        }
        system("pause");
    }
}