#pragma once
#include "lib.h"
#include "human.h"

class manager : public human
{
	friend class deal;
protected:
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