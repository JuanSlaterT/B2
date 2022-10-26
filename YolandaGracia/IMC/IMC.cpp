#include <iostream>
using namespace std;
int main () 
{
	float YGB_imc,YGB_peso,YGB_altura;
	cout<<"Ingrese el peso (kg): ";cin>>YGB_peso;
	cout<<"Ingrese la altura (metros): ";cin>>YGB_altura;
	YGB_imc=YGB_peso/(YGB_altura*YGB_altura);
	if(YGB_imc<18.5){
		cout<<"Usted tiene bajo peso"<<endl;
	}
	if(YGB_imc>=18.5 && YGB_imc<24.9){
		cout<<"Usted tiene peso normal"<<endl;
	}

	if(YGB_imc>=25 && YGB_imc<26.9){
		cout<<"Usted tiene sobrepeso grado I"<<endl;
	}

	if(YGB_imc>=27 && YGB_imc<29.9){
		cout<<"Usted tiene sobrepeso grado II"<<endl;
	}

	if(YGB_imc>=30 && YGB_imc<34.9){
		cout<<"Usted tiene obesidad tipo I"<<endl;
	}

	if(YGB_imc>=35 && YGB_imc<39.9){
		cout<<"Usted tiene obesidad tipo II"<<endl;
	}

	if(YGB_imc>=40 && YGB_imc<49.9){
		cout<<"Usted tiene obesidad tipo III (mórbida)"<<endl;
	}

	if(YGB_imc>=50){
		cout<<"Usted tiene obesidad tipo IV (extrema)"<<endl;
	}
	return 0;
}