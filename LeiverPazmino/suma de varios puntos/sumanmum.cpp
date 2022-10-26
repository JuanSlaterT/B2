#include<iostream>
using namespace std;

int main () {
    float LIPM_x,LIPM_s=0.0;
    int LIPM_i=0, LIPM_l;
    cout<<"Ingrese el valor de l: ";
    cin>>LIPM_l;
    do{
        cout<<"Ingrese el valor de x: ";
        cin>>LIPM_x;
        LIPM_i=LIPM_i+1;
        LIPM_s=LIPM_s+LIPM_x;
    }while(LIPM_i<LIPM_l);

    cout <<"La suma de los numeros fue: "<<LIPM_s<<endl;
    return 0;

}