#include <iostream>
using namespace std;
int main ()
{
	float VCQ_x,VCQ_pm=0;
	int VCQ_i=0,VCQ_l;
	cout<<"Ingrese l: ";cin>>VCQ_l;
	do{
	
	cout<<"Ingrese x: ";cin>>VCQ_x;
	VCQ_i=VCQ_i+1;
	if(VCQ_x>VCQ_pm){
		VCQ_pm=VCQ_x;
	}
	
	}while(VCQ_i<VCQ_l);
	cout<<"El promedio maximo del curso es: "<<VCQ_pm<<endl;
	return 0;
}