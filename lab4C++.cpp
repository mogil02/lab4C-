#include "deal.h"
#include "derClient.h"
#include "windows.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    client* cl = new client(12, "Гаврилов А. Д.");
    dercl* dcl = new dercl(22, "Бодриков А. В.", 'M', 22);
    cout << "Вывод объектов классов client и dercl, созданных конструкторами:" << endl << "client: ";
    cl->output();
    cout << "\ndercl: ";
    dcl->output();
    cout << "\nВвод возраста и гендера с использованием шаблонов:" << endl;
    TempClass<int> age; //Использование шаблона.
    TempClass<char> gender;
    cout << "Введите возраст: ";
    dcl->set_age(age.set());
    cout << "Введите пол: ";
    dcl->set_gender(gender.set());
    cout << "\nИспользование производного класса от класса client. Вывод объектов с помощью виртуальной функции.\nclient: ";
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