#include <iostream>
using namespace std;
int main()
{
    int HEPV_aa, HEPV_ma, HEPV_da, HEPV_an, HEPV_mn, HEPV_dn, HEPV_a, HEPV_m, HEPV_d;
    cout << "Ingrese la fecha actual Año-Mes-Dia :";
    cin >> HEPV_aa >> HEPV_ma >> HEPV_da;
    cout << "Ingrese la fecha de nacimiento Año-Mes-Dia : ";
    cin >> HEPV_an >> HEPV_mn >> HEPV_dn;

    if (HEPV_da > HEPV_dn)
    {

        HEPV_d = HEPV_da - HEPV_dn;
    }
    else
    {
        HEPV_da = HEPV_da + 30;
        HEPV_ma = HEPV_ma - 1;
        HEPV_d = HEPV_da - HEPV_dn;
    }

    if (HEPV_ma > HEPV_mn)
    {

        HEPV_m = HEPV_ma - HEPV_mn;
    }
    else
    {

        HEPV_ma = HEPV_ma + 12;
        HEPV_aa = HEPV_aa - 1;
        HEPV_m = HEPV_ma - HEPV_mn;
    }
    HEPV_a = HEPV_aa - HEPV_an;

    cout << "Usted tiene " << HEPV_a << " años, " << HEPV_m << " meses," << HEPV_d << " dias" << endl;
    return 0;
}