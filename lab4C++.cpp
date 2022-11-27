#include "deal.h"
#include "windows.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    specifications spec;
    spec.input(); //Обработка ввода номера трансмиссии.

    deal deals[4]; //Работа с массивом объектов.
    deals[0].input();
    for (int i = 0; i < 4; i++) {
        printf("Deals[%d] = %d\n", i, *(deals[i].get_carcost()));
        if (i < 3) for (int j = 0; j < i + 1; j++) deals[i + 1]++;
    }
    return 0;
}