#include "car.h"

car::car(int c, string b, specifications s) {
	cost = c;
	brand = b;
	Spec = s;
}
car::car(string b) {
	cost = 0;
	brand = b;
	specifications s(0);
	Spec = s;
}
car::car() {
	cost = 0;
	brand = "��� ��������";
	specifications s;
	Spec = s;
}
void car::input() {
	cout << "������� ���� �� ����: ";
	cin >> this->cost;
	while (getchar() != '\n');
	cout << "������� �������� ����: ";
	getline(cin, this->brand);
	Spec.input();
}
void car::output() {
	cout << "�������� ����: " << this->brand << endl;
	cout << "��������� ����: " << this->cost << endl;
	Spec.output();
}