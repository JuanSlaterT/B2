#include <iostream>
using namespace std;
int main ()
{
	float HEPV_x,HEPV_s=0;
	int HEPV_i=0,HEPV_l;
	cout<<"Ingrese numero de egresos  ";cin>>HEPV_l;
	cout<<"Ingrese numero saldo inicial : ";cin>>HEPV_s;
	
	do{
	cout<<"Ingrese numero egreso(x): ";cin>>HEPV_x;
	HEPV_i=HEPV_i+1;
	HEPV_s=HEPV_s-HEPV_x;

	}while(HEPV_i<HEPV_l);
	cout<<"El saldo final es: "<<HEPV_s<<endl;
	return 0;
}