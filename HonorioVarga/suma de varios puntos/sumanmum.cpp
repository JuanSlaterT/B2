#include<iostream>
using namespace std;

int main () {
    float HEPV_x,HEPV_s=0.0;
    int HEPV_i=0, HEPV_l;
    cout<<"Ingrese el valor de l: ";
    cin>>HEPV_l;
    do{
        cout<<"Ingrese el valor de x: ";
        cin>>HEPV_x;
        HEPV_i=HEPV_i+1;
        HEPV_s=HEPV_s+HEPV_x;
    }while(HEPV_i<HEPV_l);

    cout <<"La suma de los numeros fue: "<<HEPV_s<<endl;
    return 0;

}