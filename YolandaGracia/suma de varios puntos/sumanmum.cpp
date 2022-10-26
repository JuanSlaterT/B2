#include<iostream>
using namespace std;

int main () {
    float YGB_x,YGB_s=0.0;
    int YGB_i=0, YGB_l;
    cout<<"Ingrese el valor de l: ";
    cin>>YGB_l;
    do{
        cout<<"Ingrese el valor de x: ";
        cin>>YGB_x;
        YGB_i=YGB_i+1;
        YGB_s=YGB_s+YGB_x;
    }while(YGB_i<YGB_l);

    cout <<"La suma de los numeros fue: "<<YGB_s<<endl;
    return 0;

}