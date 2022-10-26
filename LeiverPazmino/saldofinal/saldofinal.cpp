#include <iostream>
using namespace std;
int main ()
{
	float LIPM_x,LIPM_s=0;
	int LIPM_i=0,LIPM_l;
	cout<<"Ingrese numero de egresos  ";cin>>LIPM_l;
	cout<<"Ingrese numero saldo inicial : ";cin>>LIPM_s;
	
	do{
	cout<<"Ingrese numero egreso(x): ";cin>>LIPM_x;
	LIPM_i=LIPM_i+1;
	LIPM_s=LIPM_s-LIPM_x;

	}while(LIPM_i<LIPM_l);
	cout<<"El saldo final es: "<<LIPM_s<<endl;
	return 0;
}