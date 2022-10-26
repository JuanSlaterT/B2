#include <iostream>
using namespace std;
int main ()
{
	float HEPV_x,HEPV_pm=0;
	int HEPV_i=0,HEPV_l;
	cout<<"Ingrese l: ";cin>>HEPV_l;
	do{
	
	cout<<"Ingrese x: ";cin>>HEPV_x;
	HEPV_i=HEPV_i+1;
	if(HEPV_x>HEPV_pm){
		HEPV_pm=HEPV_x;
	}
	
	}while(HEPV_i<HEPV_l);
	cout<<"El promedio maximo del curso es: "<<HEPV_pm<<endl;
	return 0;
}