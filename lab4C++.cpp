#include "deal.h"
#include "derClient.h"
#include "windows.h"
#include <set>
#include <vector>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    client Cl1;
    client Cl2(6, "Бодриков А. В.");

    vector<string> FIO;
    FIO.insert(FIO.begin(), Cl1.get_name());
    FIO.push_back(Cl2.get_name());

    //Вывод.
    cout << "Состав контейнера:" << endl;
    for (string fio : FIO) {
        cout << fio << endl;
    }

    //Поиск в контейнере vector.
    cout << "\nРезультат поиска в контейнере vector: ";
    for (string fio : FIO) {
        if (fio == "Бодриков А. В.") {
            cout << "Найден!" << endl;
        }
    }

    //Сортировка.
    for (string fio : FIO) {
        int i = 0;
        string name;
        if (FIO[i] > FIO[i + 1]) {
            name = FIO[i];
            FIO[i] = FIO[i + 1];
            FIO[i + 1] = name;
        }
        i++;
    }
    cout << "\nСостав контейнера vector после сортировки:" << endl;
    for (string fio : FIO) {
        cout << fio << endl;
    }

    //Поиск в контейнере set.
    cout << "\nРезультат поиска в контейнере set: ";
    set<string> setFIO;
    setFIO.insert(setFIO.begin(), Cl1.get_name());
    setFIO.insert(setFIO.end(), Cl2.get_name());
    set<string>::iterator it = setFIO.find("Бодриков А. В.");
    cout << "Ура! Снова найден!" << endl;
    return 0;
}