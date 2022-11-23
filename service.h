#pragma once
#include "lib.h"

class service {
    friend class deal;
private:
    string name;
    int cost;
public:
    service(string n, int c);
    service(string n);
    service();
    void input();
    void output();
    service& operator++(int);
};
