#include "service.h"

service::service(string n, int c) {
	name = n;
	cost = c;
}
service::service(string n) {
	name = n;
	cost = 0;
}
service::service() {
	name = "Название не указано.";
	cost = 0;
}
void service::input() {
	cout << "Введите название доп. услуги: ";
	getline(cin, name);
	cout << "Введите стоимость доп. услуги: ";
	cin >> cost;
	while (getchar() != '\n');
}
void service::output() {
	cout << "Название доп. услуги: " << name << endl;
	cout << "Стоимость доп. услуги: " << cost << endl;
}
service& service::operator++(int) {
	this->cost += 1000;
	return *this;
}