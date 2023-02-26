#include "CTroGiang.h"

	TroGiang::TroGiang() :
		NhanSu()
	{
		MonTroGiang = 2;
	}

	TroGiang::TroGiang(string NewHoTen, string NewNamSinh, string NewMaSo, int NewMonTroGiang) :
		NhanSu(NewHoTen, NewNamSinh, NewMaSo)
	{
		MonTroGiang = NewMonTroGiang;
	}

	TroGiang::TroGiang(const TroGiang& gv) : NhanSu(gv)
	{
		MonTroGiang = gv.MonTroGiang;
	}

	TroGiang::~TroGiang() {};

	float TroGiang::LuongTG()
	{
		return MonTroGiang * 0.3 * 18000;
	}

	void TroGiang::NhapTG()
	{
		NhapNhanSu();
		cout << "Nhap so Mon tro giang : ";
		cin >> MonTroGiang;
	}

	void TroGiang::XuatTG()
	{
		XuatNhanSu();
		cout << "\nSo Mon tro giang : ";
		cout << MonTroGiang;
	}
