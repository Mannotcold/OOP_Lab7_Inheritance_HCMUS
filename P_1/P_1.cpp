#include"CNhanSu.h"
#include"CChuyenVien.h"
#include"CGiangVien.h"
#include"CNgienCuuVien.h"
#include"CTroGiang.h"

int main()
{
	
	vector<GiangVien> GV;
	vector<TroGiang> TG;
	vector<NghienCuuVien> NCV;
	vector<ChuyenVien> CV;
	float Luong = 0;
	int choice;
	while (1) {
		cout << "\n------------------------MENU------------------------------\n";
		cout << "\n1 -  Nhap thong tin giang vien  ";
		cout << "\n2 -  Xuat danh sach giang vien ";
		cout << "\n3 -  Nhap thong tin tro giang ";
		cout << "\n4 -  Xuat danh sach tro giang";
		cout << "\n5 -  Nhap thong tin nghien cuu vien";
		cout << "\n6 -  Xuat danh sach nghien cuu vien";
		cout << "\n7 -  Nhap thong tin chuyen vien";
		cout << "\n8 -  Xuat danh sach chuyen vien";
		cout << "\n9 -  Tong luong truong dai hoc phai tra cho nhan su";
		cout << "\n10 - Thoat!";
		cout << "\n---------------------------------------------------------";
		cout << "\nNhap lua chon cua ban: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			
			GiangVien a;
			a.NhapGV();
			Luong += a.LuongGV();
			GV.push_back(a);
			
			break;

		}
		case 2:
		{
			for (int i = 0; i < GV.size(); i++)
				{
						GV[i].XuatGV();
				}
			break;

		}
		case 3:
		{
			TroGiang b;
			b.NhapTG();
			Luong += b.LuongTG();
			TG.push_back(b);
			break;
		}
		case 4:
		{
			for (int i = 0; i < TG.size(); i++)
			{
				TG[i].XuatTG();
			}
			break;

		}
		case 5:
		{
			NghienCuuVien c;
			c.NhapNCV();
			Luong += c.LuongNCV();
			NCV.push_back(c);
			break;

		}
		case 6:
		{
			for (int i = 0; i < NCV.size(); i++)
			{
				NCV[i].XuatNCV();
			}
			break;

		}
		case 7:
		{
			ChuyenVien d;
			d.NhapCV();
			Luong += d.LuongCV();
			CV.push_back(d);
			break;

		}
		case 8:
		{
			for (int i = 0; i < CV.size(); i++)
			{
				CV[i].XuatCV();
			}
			break;

		}
		case 9:
		{
			cout <<"Luong cua toan nhan su cua truong : "<< Luong;
			break;

		}

		case 10:
		{
			exit(0);
			break;
		}
		}
	}
	
	
}