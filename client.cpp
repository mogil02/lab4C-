#include "client.h"

client::client(int id, string name) {
	ID = id;
	FIO = name;
}
client::client(int id) {
	ID = id;
	FIO = "��� �� �������.";
}
client::client() {
	ID = 0;
	FIO = "��� �� �������.";
}
void client::input() {
	cout << "������� id �������: ";
	cin >> ID;
	while (getchar() != '\n');
	cout << "������� ��� �������: ";
	getline(cin, FIO);

}
void client::output() {
	cout << "��� �������: " << FIO << endl;
}