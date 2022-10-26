#include <iostream>
using namespace std;
int main()
{
    int JDAB_aa, JDAB_ma, JDAB_da, JDAB_an, JDAB_mn, JDAB_dn, JDAB_a, JDAB_m, JDAB_d;
    cout << "Ingrese la fecha actual Año-Mes-Dia :";
    cin >> JDAB_aa >> JDAB_ma >> JDAB_da;
    cout << "Ingrese la fecha de nacimiento Año-Mes-Dia : ";
    cin >> JDAB_an >> JDAB_mn >> JDAB_dn;

    if (JDAB_da > JDAB_dn)
    {

        JDAB_d = JDAB_da - JDAB_dn;
    }
    else
    {
        JDAB_da = JDAB_da + 30;
        JDAB_ma = JDAB_ma - 1;
        JDAB_d = JDAB_da - JDAB_dn;
    }

    if (JDAB_ma > JDAB_mn)
    {

        JDAB_m = JDAB_ma - JDAB_mn;
    }
    else
    {

        JDAB_ma = JDAB_ma + 12;
        JDAB_aa = JDAB_aa - 1;
        JDAB_m = JDAB_ma - JDAB_mn;
    }
    JDAB_a = JDAB_aa - JDAB_an;

    cout << "Usted tiene " << JDAB_a << " años, " << JDAB_m << " meses," << JDAB_d << " dias" << endl;
    return 0;
}