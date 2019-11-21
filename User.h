#ifndef __USER_H__
#define __USER_H__
#include "Khach.h"
#include "ListHoaDon.h"
class User : Khach, ListHoaDon
{
public:
	string name;
	string pass;
	bool inMenu1();
	int inMenu2();
	User();
	~User();
};
#endif