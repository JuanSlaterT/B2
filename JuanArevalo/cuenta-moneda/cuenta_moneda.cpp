#include <iostream>
using namespace std;
int main ()
{
	float JDAB_x,JDAB_s=0,JDAB_s1=0,JDAB_s5=0;
	int JDAB_i=0,JDAB_l,JDAB_i1=0,JDAB_i5=0;
	cout<<"Ingrese l: ";cin>>JDAB_l;
	do{

	cout<<"Ingrese x: ";cin>>JDAB_x;
	JDAB_i=JDAB_i+1;
	JDAB_s=JDAB_s+JDAB_x;
	if(JDAB_x==1){
		JDAB_i1=JDAB_i1+1;
		JDAB_s1=JDAB_s1+JDAB_x;
	}else{

		JDAB_i5=JDAB_i5+1;
		JDAB_s5=JDAB_s5+JDAB_x;
	}

	}while(JDAB_i<JDAB_l);
	cout<<"La cantidad de monedas es: "<<JDAB_i<<endl;
	cout<<"El valor es: "<<JDAB_s<<endl;


	cout<<"La cantidad de monedas de 1$ es: "<<JDAB_i1<<endl;
	cout<<"El valor es: "<<JDAB_s1<<endl;

	cout<<"La cantidad de monedas de 50ctvs es: "<<JDAB_i5<<endl;
	cout<<"La cantidad de moneda es: "<<JDAB_s5<<endl;
	return 0;
}