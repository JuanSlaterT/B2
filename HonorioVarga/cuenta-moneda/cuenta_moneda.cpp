#include <iostream>
using namespace std;
int main ()
{
	float HEPV_x,HEPV_s=0,HEPV_s1=0,HEPV_s5=0;
	int HEPV_i=0,HEPV_l,HEPV_i1=0,HEPV_i5=0;
	cout<<"Ingrese l: ";cin>>HEPV_l;
	do{

	cout<<"Ingrese x: ";cin>>HEPV_x;
	HEPV_i=HEPV_i+1;
	HEPV_s=HEPV_s+HEPV_x;
	if(HEPV_x==1){
		HEPV_i1=HEPV_i1+1;
		HEPV_s1=HEPV_s1+HEPV_x;
	}else{

		HEPV_i5=HEPV_i5+1;
		HEPV_s5=HEPV_s5+HEPV_x;
	}

	}while(HEPV_i<HEPV_l);
	cout<<"La cantidad de monedas es: "<<HEPV_i<<endl;
	cout<<"El valor es: "<<HEPV_s<<endl;


	cout<<"La cantidad de monedas de 1$ es: "<<HEPV_i1<<endl;
	cout<<"El valor es: "<<HEPV_s1<<endl;

	cout<<"La cantidad de monedas de 50ctvs es: "<<HEPV_i5<<endl;
	cout<<"La cantidad de moneda es: "<<HEPV_s5<<endl;
	return 0;
}