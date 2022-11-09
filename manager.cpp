#include "manager.h"

manager::manager(int id, int wag, string name) {
	ID = id;
	wages = wag;
	FIO = name;
}
manager::manager(int id) {
	ID = id;
	wages = 0;
	FIO = "Имя не указано.";
}
manager::manager() {
	ID = 0;
	wages = 0;
	FIO = "Имя не указано.";
}
void manager::input() {
	cout << "Введите id менеджера: ";
	cin >> ID;
	while (getchar() != '\n');
	cout << "Введите ФИО менеджера: ";
	getline(cin, FIO);
	cout << "Введите премию менеджера за сделку: ";
	cin >> wages;
	while (getchar() != '\n');
}
void manager::output() {
	cout << "ФИО менеджера: " << FIO << endl;
	cout << "Премия менеджера за сделку: " << wages << endl;
}