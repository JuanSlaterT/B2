
#include <iostream>
using namespace std;
int main()
{
    float YGB_x, YGB_s = 0, YGB_vb, YGB_piva = 12, YGB_viva, YGB_pdesc = 10, YGB_vdesc, YGB_vn;
    int YGB_i = 0, YGB_l;
    cout << "Ingrese l: ";
    cin >> YGB_l;
    do
    {
        cout << "Ingrese x: ";
        cin >> YGB_x;
        YGB_i = YGB_i + 1;
        YGB_s = YGB_s + YGB_x;
    } while (YGB_i < YGB_l);
    YGB_vb = YGB_s;
    YGB_viva = YGB_vb * YGB_piva / 100;
    YGB_vdesc = YGB_vb * YGB_pdesc / 100;
    YGB_vn = YGB_vb + YGB_viva - YGB_vdesc;
    cout << "El valor a pagar es de: " << YGB_vn << endl;
    return 0;
}