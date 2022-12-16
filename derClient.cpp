#include "derClient.h"

dercl::dercl() :client()
{
	this->gender = 'M';
	this->age = 0;
}

dercl::dercl(int id, string name, char gender, int age) : client(id, name)
{
	this->gender = gender;
	this->age = age;
}

dercl dercl::operator=(const client& Client) {
	client::operator=(Client);
	this->age = 0;
	this->gender = 77;
	return *this;
}

void dercl::input() {
	client::input();
	cout << "Введите возраст: ";
	cin >> this->age;
	while (getchar() != '\n');
	cout << "Введите пол: ";
	cin >> this->age;
	while (getchar() != '\n');
}

void dercl::output() {
	cout << "Возраст: " << age << endl;
	cout << "Пол: " << gender << endl;
	client::output();
}

void dercl::set_age(int age)
{
	this->age = age;
}

void dercl::set_gender(char gender) {
	if (gender == 'M' || gender == 'F')
		this->gender = gender;
	else {
		this->gender = 'M';
		cout << "Неверно указан пол, введенно значение по умолчанию \"M\"" << endl;
	}
}