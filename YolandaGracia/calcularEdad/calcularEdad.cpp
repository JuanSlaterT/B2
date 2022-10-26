#include <iostream>
using namespace std;
int main()
{
    int YGB_aa, YGB_ma, YGB_da, YGB_an, YGB_mn, YGB_dn, YGB_a, YGB_m, YGB_d;
    cout << "Ingrese la fecha actual Año-Mes-Dia :";
    cin >> YGB_aa >> YGB_ma >> YGB_da;
    cout << "Ingrese la fecha de nacimiento Año-Mes-Dia : ";
    cin >> YGB_an >> YGB_mn >> YGB_dn;

    if (YGB_da > YGB_dn)
    {

        YGB_d = YGB_da - YGB_dn;
    }
    else
    {
        YGB_da = YGB_da + 30;
        YGB_ma = YGB_ma - 1;
        YGB_d = YGB_da - YGB_dn;
    }

    if (YGB_ma > YGB_mn)
    {

        YGB_m = YGB_ma - YGB_mn;
    }
    else
    {

        YGB_ma = YGB_ma + 12;
        YGB_aa = YGB_aa - 1;
        YGB_m = YGB_ma - YGB_mn;
    }
    YGB_a = YGB_aa - YGB_an;

    cout << "Usted tiene " << YGB_a << " años, " << YGB_m << " meses," << YGB_d << " dias" << endl;
    return 0;
}