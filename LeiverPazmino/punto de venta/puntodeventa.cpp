
#include <iostream>
using namespace std;
int main()
{
    float LIPM_x, LIPM_s = 0, LIPM_vb, LIPM_piva = 12, LIPM_viva, LIPM_pdesc = 10, LIPM_vdesc, LIPM_vn;
    int LIPM_i = 0, LIPM_l;
    cout << "Ingrese l: ";
    cin >> LIPM_l;
    do
    {
        cout << "Ingrese x: ";
        cin >> LIPM_x;
        LIPM_i = LIPM_i + 1;
        LIPM_s = LIPM_s + LIPM_x;
    } while (LIPM_i < LIPM_l);
    LIPM_vb = LIPM_s;
    LIPM_viva = LIPM_vb * LIPM_piva / 100;
    LIPM_vdesc = LIPM_vb * LIPM_pdesc / 100;
    LIPM_vn = LIPM_vb + LIPM_viva - LIPM_vdesc;
    cout << "El valor a pagar es de: " << LIPM_vn << endl;
    return 0;
}