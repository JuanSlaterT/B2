#include <iostream>
using namespace std;
int main()
{
    int LIPM_aa, LIPM_ma, LIPM_da, LIPM_an, LIPM_mn, LIPM_dn, LIPM_a, LIPM_m, LIPM_d;
    cout << "Ingrese la fecha actual Año-Mes-Dia :";
    cin >> LIPM_aa >> LIPM_ma >> LIPM_da;
    cout << "Ingrese la fecha de nacimiento Año-Mes-Dia : ";
    cin >> LIPM_an >> LIPM_mn >> LIPM_dn;

    if (LIPM_da > LIPM_dn)
    {

        LIPM_d = LIPM_da - LIPM_dn;
    }
    else
    {
        LIPM_da = LIPM_da + 30;
        LIPM_ma = LIPM_ma - 1;
        LIPM_d = LIPM_da - LIPM_dn;
    }

    if (LIPM_ma > LIPM_mn)
    {

        LIPM_m = LIPM_ma - LIPM_mn;
    }
    else
    {

        LIPM_ma = LIPM_ma + 12;
        LIPM_aa = LIPM_aa - 1;
        LIPM_m = LIPM_ma - LIPM_mn;
    }
    LIPM_a = LIPM_aa - LIPM_an;

    cout << "Usted tiene " << LIPM_a << " años, " << LIPM_m << " meses," << LIPM_d << " dias" << endl;
    return 0;
}