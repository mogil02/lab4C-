#pragma once
#include "lib.h"
#include "human.h"

class client : public human
{
	friend class deal;
protected:
	int ID;
	string FIO;
public:
	client(int id, string name);
	client(int id);
	client();
	virtual void input();
	virtual void output();
};
