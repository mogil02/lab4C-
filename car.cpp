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
car& car::operator++(int) {
	this->cost += 10000;
	return *this;
}
void car::sravn_cost(car& C) {
	if (this->cost > C.cost) cout << "Цена на первый автомобиль выше чем на второй." << endl;
	else if (this->cost < C.cost) cout << "Цена на второй автомобиль выше чем на первый." << endl;
	else cout << "Цена на первый и на второй автомобили равны." << endl;
}