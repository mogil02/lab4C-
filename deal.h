#pragma once
#include "lib.h"
#include "car.h"
#include "client.h"
#include "manager.h"
#include "service.h"

class deal {
private:
    static int count;
    car Car;
    client Client;
    manager Manager;
    service Service;
public:
    deal(car Cr, client Cl, manager Mn, service Sv);
    deal(car Cr);
    deal();
    ~deal();
    void input();
    void output();
    int sum_costs();
    static int get_count();
    car& get_car();
    client& get_client();
    service& get_service();
    manager& get_manager();
    deal operator++(int);
    deal operator+(const deal& d);
    int* get_carcost();
};