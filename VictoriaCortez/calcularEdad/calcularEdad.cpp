#include <iostream>
using namespace std;
int main()
{
    int VCQ_aa, VCQ_ma, VCQ_da, VCQ_an, VCQ_mn, VCQ_dn, VCQ_a, VCQ_m, VCQ_d;
    cout << "Ingrese la fecha actual Año-Mes-Dia :";
    cin >> VCQ_aa >> VCQ_ma >> VCQ_da;
    cout << "Ingrese la fecha de nacimiento Año-Mes-Dia : ";
    cin >> VCQ_an >> VCQ_mn >> VCQ_dn;

    if (VCQ_da > VCQ_dn)
    {

        VCQ_d = VCQ_da - VCQ_dn;
    }
    else
    {
        VCQ_da = VCQ_da + 30;
        VCQ_ma = VCQ_ma - 1;
        VCQ_d = VCQ_da - VCQ_dn;
    }

    if (VCQ_ma > VCQ_mn)
    {

        VCQ_m = VCQ_ma - VCQ_mn;
    }
    else
    {

        VCQ_ma = VCQ_ma + 12;
        VCQ_aa = VCQ_aa - 1;
        VCQ_m = VCQ_ma - VCQ_mn;
    }
    VCQ_a = VCQ_aa - VCQ_an;

    cout << "Usted tiene " << VCQ_a << " años, " << VCQ_m << " meses," << VCQ_d << " dias" << endl;
    return 0;
}