#include "deal.h"

int deal::count = 0;
deal::deal(car Cr, client Cl, manager Mn, service Sv) {
	Car = Cr;
	Client = Cl;
	Manager = Mn;
	Service = Sv;
	count++;
}
deal::deal(car Cr) {
	Car = Cr;
	manager m(0);
	client c(0);
	service s;
	Manager = m;
	Client = c;
	Service = s;
	count++;
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
	count++;
}
deal::~deal() {
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
car& deal::get_car() {
	return this->Car;
}
client& deal::get_client() {
	return this->Client;
}
manager& deal::get_manager() {
	return this->Manager;
}
service& deal::get_service() {
	return this->Service;
}
int deal::get_count() {
	return count;
}
deal deal::operator++(int) {
	this->Car++;
	this->Service++;
	return *this;
}
deal deal::operator+(const deal& d) {
	this->Car.cost += d.Car.cost;
	this->Service.cost += d.Service.cost;
	return *this;
}
int* deal::get_carcost() {
	return &this->Car.cost;
}