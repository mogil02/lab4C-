#pragma once
#include "client.h"
#include "TacmplateClass.h"

class dercl : public client
{
protected:
    char gender;
    int age;
public:
    dercl();
    dercl(int id, string name, char gender, int age);
    void set_gender(char gender);
    void set_age(int age);
    dercl operator = (const client& Client);
    void input();
    void output();
};
