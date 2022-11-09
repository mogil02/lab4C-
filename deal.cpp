#include "deal.h"

deal::deal(car Cr, client Cl, manager Mn, service Sv) {
	Car = Cr;
	Client = Cl;
	Manager = Mn;
	Service = Sv;
}
deal::deal(car Cr) {
	Car = Cr;
	manager m(0);
	client c(0);
	service s;
	Manager = m;
	Client = c;
	Service = s;
}
deal::deal() {
	car cr;
	manager m;
	client c;
	service s;
	Car = cr;
	Manager = m;
	Client = c;
	Service = s;
}
void deal::input() {
	Car.input();
	Manager.input();
	Client.input();
	Service.input();
}
void deal::output() {
	Car.output();
	Manager.output();
	Client.output();
	Service.output();
}
int deal::sum_costs() {
	int sum;
	sum = Car.cost + Service.cost;
	return sum;
}
