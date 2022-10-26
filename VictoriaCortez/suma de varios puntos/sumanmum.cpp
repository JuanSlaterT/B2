#include<iostream>
using namespace std;

int main () {
    float VCQ_x,VCQ_s=0.0;
    int VCQ_i=0, VCQ_l;
    cout<<"Ingrese el valor de l: ";
    cin>>VCQ_l;
    do{
        cout<<"Ingrese el valor de x: ";
        cin>>VCQ_x;
        VCQ_i=VCQ_i+1;
        VCQ_s=VCQ_s+VCQ_x;
    }while(VCQ_i<VCQ_l);

    cout <<"La suma de los numeros fue: "<<VCQ_s<<endl;
    return 0;

}