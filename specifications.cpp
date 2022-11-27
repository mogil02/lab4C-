#include "specifications.h"

specifications::specifications(int pow, int speed, int trans_id, float vol) {
	engine_power = pow;
	max_speed = speed;
	transmission_id = trans_id;
	volume = vol;
}
specifications::specifications(int pow) {
	engine_power = pow;
	max_speed = 0;
	transmission_id = 1;
	volume = 0;
}
specifications::specifications() {
	engine_power = 0;
	max_speed = 0;
	transmission_id = 1;
	volume = 0;
}
string specifications::trans_name(int id) {
	if (id == 1) return meh;
	else if (id == 2) return gidromeh;
	else if (id == 3) return robot;
	else return variator;
}
void specifications::input() {
	int id;
	cout << "������� �������� ���������: ";
	cin >> engine_power;
	cout << "������� ������������ ��������: ";
	cin >> max_speed;
	cout << "������� ����� �����������\n1) - ��������\n2) - �������������\n3) - �����\n4) - ��������\n����: ";
	cin >> id;
	try {
		if (id > 4 || id < 1) throw id;
		transmission_id = id;
	}
	catch (const int) {
		cout << "������ �����! ������� �������� �� ���������: \"1\"." << endl;
	}
	cout << "������� ����� ���������: ";
	cin >> volume;
}
void specifications::output() {
	cout << "������� �������� ���������: " << engine_power << endl;
	cout << "������� ������������ ��������: " << max_speed << endl;
	cout << "������� �������: " << trans_name(transmission_id) << endl;
	cout << "����� ���������: " << volume << endl;
}
