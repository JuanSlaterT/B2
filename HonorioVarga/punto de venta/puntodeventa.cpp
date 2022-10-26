
#include <iostream>
using namespace std;
int main()
{
    float HEPV_x, HEPV_s = 0, HEPV_vb, HEPV_piva = 12, HEPV_viva, HEPV_pdesc = 10, HEPV_vdesc, HEPV_vn;
    int HEPV_i = 0, HEPV_l;
    cout << "Ingrese l: ";
    cin >> HEPV_l;
    do
    {
        cout << "Ingrese x: ";
        cin >> HEPV_x;
        HEPV_i = HEPV_i + 1;
        HEPV_s = HEPV_s + HEPV_x;
    } while (HEPV_i < HEPV_l);
    HEPV_vb = HEPV_s;
    HEPV_viva = HEPV_vb * HEPV_piva / 100;
    HEPV_vdesc = HEPV_vb * HEPV_pdesc / 100;
    HEPV_vn = HEPV_vb + HEPV_viva - HEPV_vdesc;
    cout << "El valor a pagar es de: " << HEPV_vn << endl;
    return 0;
}