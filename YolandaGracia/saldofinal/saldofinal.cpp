#include <iostream>
using namespace std;
int main ()
{
	float YGB_x,YGB_s=0;
	int YGB_i=0,YGB_l;
	cout<<"Ingrese numero de egresos  ";cin>>YGB_l;
	cout<<"Ingrese numero saldo inicial : ";cin>>YGB_s;
	
	do{
	cout<<"Ingrese numero egreso(x): ";cin>>YGB_x;
	YGB_i=YGB_i+1;
	YGB_s=YGB_s-YGB_x;

	}while(YGB_i<YGB_l);
	cout<<"El saldo final es: "<<YGB_s<<endl;
	return 0;
}