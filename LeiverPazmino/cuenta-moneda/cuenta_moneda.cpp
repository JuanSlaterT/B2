#include <iostream>
using namespace std;
int main ()
{
	float LIPM_x,LIPM_s=0,LIPM_s1=0,LIPM_s5=0;
	int LIPM_i=0,LIPM_l,LIPM_i1=0,LIPM_i5=0;
	cout<<"Ingrese l: ";cin>>LIPM_l;
	do{

	cout<<"Ingrese x: ";cin>>LIPM_x;
	LIPM_i=LIPM_i+1;
	LIPM_s=LIPM_s+LIPM_x;
	if(LIPM_x==1){
		LIPM_i1=LIPM_i1+1;
		LIPM_s1=LIPM_s1+LIPM_x;
	}else{

		LIPM_i5=LIPM_i5+1;
		LIPM_s5=LIPM_s5+LIPM_x;
	}

	}while(LIPM_i<LIPM_l);
	cout<<"La cantidad de monedas es: "<<LIPM_i<<endl;
	cout<<"El valor es: "<<LIPM_s<<endl;


	cout<<"La cantidad de monedas de 1$ es: "<<LIPM_i1<<endl;
	cout<<"El valor es: "<<LIPM_s1<<endl;

	cout<<"La cantidad de monedas de 50ctvs es: "<<LIPM_i5<<endl;
	cout<<"La cantidad de moneda es: "<<LIPM_s5<<endl;
	return 0;
}