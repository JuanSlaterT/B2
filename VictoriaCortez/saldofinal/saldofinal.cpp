#include <iostream>
using namespace std;
int main ()
{
	float VCQ_x,VCQ_s=0;
	int VCQ_i=0,VCQ_l;
	cout<<"Ingrese numero de egresos  ";cin>>VCQ_l;
	cout<<"Ingrese numero saldo inicial : ";cin>>VCQ_s;
	
	do{
	cout<<"Ingrese numero egreso(x): ";cin>>VCQ_x;
	VCQ_i=VCQ_i+1;
	VCQ_s=VCQ_s-VCQ_x;

	}while(VCQ_i<VCQ_l);
	cout<<"El saldo final es: "<<VCQ_s<<endl;
	return 0;
}