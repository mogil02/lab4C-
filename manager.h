#pragma once
#include "lib.h"

class manager
{
	friend class deal;
private:
	int ID;
	int wages;
	string FIO;
public:
	manager(int id, int wag, string name);
	manager(int id);
	manager();
	void input();
	void output();
};