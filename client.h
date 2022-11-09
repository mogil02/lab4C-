#pragma once
#include "lib.h"

class client
{
	friend class deal;
private:
	int ID;
	string FIO;
public:
	client(int id, string name);
	client(int id);
	client();
	void input();
	void output();
};
