#include "deal.h"
#include "derClient.h"
#include "windows.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    client* cl = new client;
    dercl* dcl = new dercl;
    TempClass<int> age; //Использование шаблона.
    TempClass<char> gender;
    cout << "Введите возраст: ";
    dcl->set_age(age.set());
    cout << "Введите пол: ";
    dcl->set_gender(gender.set());
    cout << "\nИспользование производного класса от класса client. Вывод объектов с помощью виртуальной функции" << endl << "client: ";
    cl->output();
    cout << endl << "dercl: ";
    cl = dcl;
    cl->output();
    cout << endl;

    cout << "\nИспользование аюстрактного класса для вывода классов client и manager:" << endl << "client: ";
    manager* m = new manager;
    human* h;
    client* c = new client;
    h = c;
    h->output();
    cout << "\nmanager: ";
    h = m;
    h->output();
    return 0;
}