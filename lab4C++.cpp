#include "deal.h"
#include "windows.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    specifications spec;
    spec.input(); //Обработка ввода номера трансмиссии.

    deal deals[3], spdeals[2][3]; //Работа с массивом объектов.
    cout << "\nИнициализация одномерного массива сделок:" << endl;
    for (int i = 0; i < 3; i++)
        deals[i].input();

    cout << "\nВывод одномерного массива сделок:" << endl;
    for (int i = 0; i < 3; i++)
        deals[i].output();

    cout << "\nКопирование одномерного массива во вторую ячейку двумерного массива (например, список таблиц сделок): " << endl;
    for (int i = 0; i < 3; i++)
        spdeals[1][i] = deals[i];
    cout << "\nВывод двумерного массива : " << endl;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            spdeals[i][j].output();
    return 0;
}