#include "admin.h"



admin::admin()
{
}


admin::~admin()
{
}

void admin::fAddTacGia(TacGia temp)
{
	ArrT.push_back(temp);
}

void admin::fAddNXB(NXB temp)
{
	ArrN.push_back(temp);
}

void admin::fAddUser(User temp)
{
	ArrU.push_back(temp);
}

void admin::fDeleteTacGia(TacGia erase)
{
	int i = 0;
	for (vector<TacGia>::iterator it = ArrT.begin(); it != ArrT.end(); ++it)
	{
		i++;
		if ((*it).tenTacGia == erase.tenTacGia)
		{

			ArrT.erase(ArrT.begin() + i);
		}
	}
}

void admin::fDeleteNXB(NXB erase)
{
	int j = 0;
	for (auto i = ArrN.begin(); i != ArrN.end(); ++i)
	{
		j++;
		if ((*i).tenNXB == erase.tenNXB)
		{
			ArrN.erase(ArrN.begin() + j);
		}
	}
}

void admin::fDeleteUser(User erase)
{
	int j = 0;
	for (auto i = ArrU.begin(); i != ArrU.end(); ++i)
	{
		j++;
		if ((*i).name == erase.name)
		{
			ArrU.erase(ArrU.begin() + j);
		}
	}
}
