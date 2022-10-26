#include <iostream>
using namespace std;
int main ()
{
	float YGB_x,YGB_s=0,YGB_s1=0,YGB_s5=0;
	int YGB_i=0,YGB_l,YGB_i1=0,YGB_i5=0;
	cout<<"Ingrese l: ";cin>>YGB_l;
	do{

	cout<<"Ingrese x: ";cin>>YGB_x;
	YGB_i=YGB_i+1;
	YGB_s=YGB_s+YGB_x;
	if(YGB_x==1){
		YGB_i1=YGB_i1+1;
		YGB_s1=YGB_s1+YGB_x;
	}else{

		YGB_i5=YGB_i5+1;
		YGB_s5=YGB_s5+YGB_x;
	}

	}while(YGB_i<YGB_l);
	cout<<"La cantidad de monedas es: "<<YGB_i<<endl;
	cout<<"El valor es: "<<YGB_s<<endl;


	cout<<"La cantidad de monedas de 1$ es: "<<YGB_i1<<endl;
	cout<<"El valor es: "<<YGB_s1<<endl;

	cout<<"La cantidad de monedas de 50ctvs es: "<<YGB_i5<<endl;
	cout<<"La cantidad de moneda es: "<<YGB_s5<<endl;
	return 0;
}