#include "manager.h"

manager::manager(int id, int wag, string name) {
	ID = id;
	wages = wag;
	FIO = name;
}
manager::manager(int id) {
	ID = id;
	wages = 0;
	FIO = "��� �� �������.";
}
manager::manager() {
	ID = 0;
	wages = 0;
	FIO = "��� �� �������.";
}
void manager::input() {
	cout << "������� id ���������: ";
	cin >> ID;
	while (getchar() != '\n');
	cout << "������� ��� ���������: ";
	getline(cin, FIO);
	cout << "������� ������ ��������� �� ������: ";
	cin >> wages;
	while (getchar() != '\n');
}
void manager::output() {
	cout << "��� ���������: " << FIO << endl;
	cout << "������ ��������� �� ������: " << wages << endl;
}