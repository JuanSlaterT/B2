#include <iostream>
using namespace std;
int main () 
{
	float HEPV_imc,HEPV_peso,HEPV_altura;
	cout<<"Ingrese el peso (kg): ";cin>>HEPV_peso;
	cout<<"Ingrese la altura (metros): ";cin>>HEPV_altura;
	HEPV_imc=HEPV_peso/(HEPV_altura*HEPV_altura);
	if(HEPV_imc<18.5){
		cout<<"Usted tiene bajo peso"<<endl;
	}
	if(HEPV_imc>=18.5 && HEPV_imc<24.9){
		cout<<"Usted tiene peso normal"<<endl;
	}

	if(HEPV_imc>=25 && HEPV_imc<26.9){
		cout<<"Usted tiene sobrepeso grado I"<<endl;
	}

	if(HEPV_imc>=27 && HEPV_imc<29.9){
		cout<<"Usted tiene sobrepeso grado II"<<endl;
	}

	if(HEPV_imc>=30 && HEPV_imc<34.9){
		cout<<"Usted tiene obesidad tipo I"<<endl;
	}

	if(HEPV_imc>=35 && HEPV_imc<39.9){
		cout<<"Usted tiene obesidad tipo II"<<endl;
	}

	if(HEPV_imc>=40 && HEPV_imc<49.9){
		cout<<"Usted tiene obesidad tipo III (mórbida)"<<endl;
	}

	if(HEPV_imc>=50){
		cout<<"Usted tiene obesidad tipo IV (extrema)"<<endl;
	}
	return 0;
}