#pragma once
#include "lib.h"
#include "car.h"
#include "client.h"
#include "manager.h"
#include "service.h"

class deal {
private:
    static int number;
    car Car;
    client Client;
    manager Manager;
    service Service;
public:
    deal(car Cr, client Cl, manager Mn, service Sv);
    deal(car Cr);
    deal();
    void input();
    void output();
    int sum_costs();
    static int get_number();
};

int deal::number = 0;