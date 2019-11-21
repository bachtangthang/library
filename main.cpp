#include "Sach.h"
#include"List_sach.h"
#include "HoaDon.h"
#include "ListHoaDon.h"
#include "Khach.h"
#include "User.h"
int main()
{
	List_sach O;
	O.n = O.NhapSach();
	O.XuatSach(O.n);
	cin.ignore();
	/*cout << "Nhap ten sach can tim" << endl;
	string ten;
	cin >> ten;
	O.TimSachTheoTen(ten);
	O.XuatSach(O.n);*/
	ListHoaDon a;
	Khach Cus;
	bool y = Cus.fTimSachTheoTen(O,O.n);
	if (y == true)
	{
		int temp = Cus.InMenu();
		if (temp == 1)
		{
			User h;
			bool mn = h.inMenu1();
			if (mn == true)
			{
						a.fThemSachVaoListHoaDon(O, O.n);
						cin.ignore();
						a.fThemSachVaoListHoaDon(O, O.n);
			}
		}
	}
	a.fXuatListHoaDon();
}