#include <iostream>
using namespace std;
int main ()
{
	float JDAB_x,JDAB_s=0;
	int JDAB_i=0,JDAB_l;
	cout<<"Ingrese numero de egresos  ";cin>>JDAB_l;
	cout<<"Ingrese numero saldo inicial : ";cin>>JDAB_s;
	
	do{
	cout<<"Ingrese numero egreso(x): ";cin>>JDAB_x;
	JDAB_i=JDAB_i+1;
	JDAB_s=JDAB_s-JDAB_x;

	}while(JDAB_i<JDAB_l);
	cout<<"El saldo final es: "<<JDAB_s<<endl;
	return 0;
}