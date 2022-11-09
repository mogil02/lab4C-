#pragma once
#include "lib.h"
#include "specifications.h"

class car
{
    friend class deal;
private:
    int cost;
    string brand;
    specifications Spec;
public:
    car(int c, string b, specifications s);
    car(string b);
    car();
    void input();
    void output();
};