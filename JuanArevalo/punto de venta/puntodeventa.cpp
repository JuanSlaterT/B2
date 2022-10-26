
#include <iostream>
using namespace std;
int main()
{
    float JDAB_x, JDAB_s = 0, JDAB_vb, JDAB_piva = 12, JDAB_viva, JDAB_pdesc = 10, JDAB_vdesc, JDAB_vn;
    int JDAB_i = 0, JDAB_l;
    cout << "Ingrese l: ";
    cin >> JDAB_l;
    do
    {
        cout << "Ingrese x: ";
        cin >> JDAB_x;
        JDAB_i = JDAB_i + 1;
        JDAB_s = JDAB_s + JDAB_x;
    } while (JDAB_i < JDAB_l);
    JDAB_vb = JDAB_s;
    JDAB_viva = JDAB_vb * JDAB_piva / 100;
    JDAB_vdesc = JDAB_vb * JDAB_pdesc / 100;
    JDAB_vn = JDAB_vb + JDAB_viva - JDAB_vdesc;
    cout << "El valor a pagar es de: " << JDAB_vn << endl;
    return 0;
}