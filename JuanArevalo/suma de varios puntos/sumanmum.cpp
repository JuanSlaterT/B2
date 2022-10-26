#include<iostream>
using namespace std;

int main () {
    float JDAB_x,JDAB_s=0.0;
    int JDAB_i=0, JDAB_l;
    cout<<"Ingrese el valor de l: ";
    cin>>JDAB_l;
    do{
        cout<<"Ingrese el valor de x: ";
        cin>>JDAB_x;
        JDAB_i=JDAB_i+1;
        JDAB_s=JDAB_s+JDAB_x;
    }while(JDAB_i<JDAB_l);

    cout <<"La suma de los numeros fue: "<<JDAB_s<<endl;
    return 0;

}