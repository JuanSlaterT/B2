
#include <iostream>
using namespace std;
int main()
{
    float VCQ_x, VCQ_s = 0, VCQ_vb, VCQ_piva = 12, VCQ_viva, VCQ_pdesc = 10, VCQ_vdesc, VCQ_vn;
    int VCQ_i = 0, VCQ_l;
    cout << "Ingrese l: ";
    cin >> VCQ_l;
    do
    {
        cout << "Ingrese x: ";
        cin >> VCQ_x;
        VCQ_i = VCQ_i + 1;
        VCQ_s = VCQ_s + VCQ_x;
    } while (VCQ_i < VCQ_l);
    VCQ_vb = VCQ_s;
    VCQ_viva = VCQ_vb * VCQ_piva / 100;
    VCQ_vdesc = VCQ_vb * VCQ_pdesc / 100;
    VCQ_vn = VCQ_vb + VCQ_viva - VCQ_vdesc;
    cout << "El valor a pagar es de: " << VCQ_vn << endl;
    return 0;
}