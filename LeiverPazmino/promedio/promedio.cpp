#include <iostream>
using namespace std;
int main ()
{
	float LIPM_x,LIPM_pm=0;
	int LIPM_i=0,LIPM_l;
	cout<<"Ingrese l: ";cin>>LIPM_l;
	do{
	
	cout<<"Ingrese x: ";cin>>LIPM_x;
	LIPM_i=LIPM_i+1;
	if(LIPM_x>LIPM_pm){
		LIPM_pm=LIPM_x;
	}
	
	}while(LIPM_i<LIPM_l);
	cout<<"El promedio maximo del curso es: "<<LIPM_pm<<endl;
	return 0;
}