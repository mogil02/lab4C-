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
	name = "�������� �� �������.";
	cost = 0;
}
void service::input() {
	cout << "������� �������� ���. ������: ";
	getline(cin, name);
	cout << "������� ��������� ���. ������: ";
	cin >> cost;
	while (getchar() != '\n');
}
void service::output() {
	cout << "�������� ���. ������: " << name << endl;
	cout << "��������� ���. ������: " << cost << endl;
}
service& service::operator++(int) {
	this->cost += 1000;
	return *this;
}