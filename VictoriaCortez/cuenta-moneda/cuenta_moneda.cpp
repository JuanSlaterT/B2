#include <iostream>
using namespace std;
int main ()
{
	float VCQ_x,VCQ_s=0,VCQ_s1=0,VCQ_s5=0;
	int VCQ_i=0,VCQ_l,VCQ_i1=0,VCQ_i5=0;
	cout<<"Ingrese l: ";cin>>VCQ_l;
	do{

	cout<<"Ingrese x: ";cin>>VCQ_x;
	VCQ_i=VCQ_i+1;
	VCQ_s=VCQ_s+VCQ_x;
	if(VCQ_x==1){
		VCQ_i1=VCQ_i1+1;
		VCQ_s1=VCQ_s1+VCQ_x;
	}else{

		VCQ_i5=VCQ_i5+1;
		VCQ_s5=VCQ_s5+VCQ_x;
	}

	}while(VCQ_i<VCQ_l);
	cout<<"La cantidad de monedas es: "<<VCQ_i<<endl;
	cout<<"El valor es: "<<VCQ_s<<endl;


	cout<<"La cantidad de monedas de 1$ es: "<<VCQ_i1<<endl;
	cout<<"El valor es: "<<VCQ_s1<<endl;

	cout<<"La cantidad de monedas de 50ctvs es: "<<VCQ_i5<<endl;
	cout<<"La cantidad de moneda es: "<<VCQ_s5<<endl;
	return 0;
}