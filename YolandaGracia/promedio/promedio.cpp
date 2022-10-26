#include <iostream>
using namespace std;
int main ()
{
	float YGB_x,YGB_pm=0;
	int YGB_i=0,YGB_l;
	cout<<"Ingrese l: ";cin>>YGB_l;
	do{
	
	cout<<"Ingrese x: ";cin>>YGB_x;
	YGB_i=YGB_i+1;
	if(YGB_x>YGB_pm){
		YGB_pm=YGB_x;
	}
	
	}while(YGB_i<YGB_l);
	cout<<"El promedio maximo del curso es: "<<YGB_pm<<endl;
	return 0;
}