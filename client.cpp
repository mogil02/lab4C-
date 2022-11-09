#include "client.h"

client::client(int id, string name) {
	ID = id;
	FIO = name;
}
client::client(int id) {
	ID = id;
	FIO = "Имя не указано.";
}
client::client() {
	ID = 0;
	FIO = "Имя не указано.";
}
void client::input() {
	cout << "Введите id клиента: ";
	cin >> ID;
	while (getchar() != '\n');
	cout << "Введите ФИО клиента: ";
	getline(cin, FIO);

}
void client::output() {
	cout << "ФИО клиента: " << FIO << endl;
}