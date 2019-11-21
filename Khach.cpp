#include "Khach.h"





bool Khach::fTimSachTheoTen(List_sach A, int n)
{
	
	cout << "Nhap ten sach ban can tim: ";
	string ten;
	getline(cin, ten);
	fflush(stdin);
	int dem = 0;
	int ViTri = -1;
	for (int i = 0; i < n; i++)
	{
		if (A.ArraySach[i].GetTenSach() == ten)
		{
			dem++;
			ViTri = i;
		}
	}
	if (dem == 0)
	{
		cout << "Khong tim thay.";
		return false;
	}
	else
	{
		A.ArraySach[ViTri].fXuat1Sach();
		return true;
	}
}

int Khach::InMenu()
{
		int n;
		cout << "Mua sach ko?" << endl;
		cout << "1. Mua" << endl;
		cout << "2. Thui khong mua dau " << endl;
		cin >> n;
		return n;
}

Khach::Khach()
{
}


Khach::~Khach()
{
}
