#include "deal.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    car c1, c2;
    c1.output();
    puts("");
    c2.output();
    c2++;
    puts("");
    c2.output();
    puts("");
    c1.sravn_cost(c2);
    puts("");
    puts("");
    deal q;
    q++;
    deal deals[4];
    for (int i = 0; i < 4; i++) {
        printf("Deals[%d] = %d\n", i, *(deals[i].get_carcost()));
        if (i < 3) for (int j = 0; j < i + 1; j++) deals[i + 1]++;
    }
    return 0;
}