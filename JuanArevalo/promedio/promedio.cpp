#include <iostream>
using namespace std;
int main ()
{
	float JDAB_x,JDAB_pm=0;
	int JDAB_i=0,JDAB_l;
	cout<<"Ingrese l: ";cin>>JDAB_l;
	do{
	
	cout<<"Ingrese x: ";cin>>JDAB_x;
	JDAB_i=JDAB_i+1;
	if(JDAB_x>JDAB_pm){
		JDAB_pm=JDAB_x;
	}
	
	}while(JDAB_i<JDAB_l);
	cout<<"El promedio maximo del curso es: "<<JDAB_pm<<endl;
	return 0;
}