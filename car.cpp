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
	brand = "Нет названия";
	specifications s;
	Spec = s;
}
void car::input() {
	cout << "Введите цену на авто: ";
	cin >> this->cost;
	while (getchar() != '\n');
	cout << "Введите название авто: ";
	getline(cin, this->brand);
	Spec.input();
}
void car::output() {
	cout << "Название авто: " << this->brand << endl;
	cout << "Стоимость авто: " << this->cost << endl;
	Spec.output();
}