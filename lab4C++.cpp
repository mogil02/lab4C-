#include "deal.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    deal s[10];
    for (int i = 0; i < 10; i++)
        cout << "\nNumber: " << s[i].get_count() << endl;
    return 0;
}