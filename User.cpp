#include "User.h"


User::User()
{
	name = "ABC";
	pass = "123";
}


User::~User()
{
}

bool User::inMenu1()
{
	cin.ignore();
	string name1, pass1;
	cout << "ten dang nhap: ";
	getline(cin, name1);
	fflush(stdin);
	cout << "Mat khau: ";
	getline(cin, pass1);
	fflush(stdin);
	if ((name1 == name) && (pass1 == pass))
	{
		cout << "Dang nhap thanh cong";
		return true;
	}
	else return false;
}

int User::inMenu2()
{
	system("cls");
	int n;
	cout << "1.Tim sach theo ten: " << endl;
	cout << "2.Thoat." << endl;
	cin >> n;
	return n;
}
