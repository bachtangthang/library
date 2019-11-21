#ifndef __ADMIN_H__
#define __ADMIN_H__
#include "TacGia.h"
#include "NXB.h"
#include "User.h"
#include <vector>
class admin
{
public:
	vector<TacGia> ArrT;
	vector<NXB> ArrN;
	vector<User> ArrU;
	void fAddTacGia(TacGia temp);
	void fAddNXB(NXB temp);
	void fAddUser(User temp);
	void fDeleteTacGia(TacGia erase);
	void fDeleteNXB(NXB erase);
	void fDeleteUser(User erase);
};
#endif