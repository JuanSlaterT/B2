#include <iostream>
using namespace std;
int main () 
{
	float LIPM_imc,LIPM_peso,LIPM_altura;
	cout<<"Ingrese el peso (kg): ";cin>>LIPM_peso;
	cout<<"Ingrese la altura (metros): ";cin>>LIPM_altura;
	LIPM_imc=LIPM_peso/(LIPM_altura*LIPM_altura);
	if(LIPM_imc<18.5){
		cout<<"Usted tiene bajo peso"<<endl;
	}
	if(LIPM_imc>=18.5 && LIPM_imc<24.9){
		cout<<"Usted tiene peso normal"<<endl;
	}

	if(LIPM_imc>=25 && LIPM_imc<26.9){
		cout<<"Usted tiene sobrepeso grado I"<<endl;
	}

	if(LIPM_imc>=27 && LIPM_imc<29.9){
		cout<<"Usted tiene sobrepeso grado II"<<endl;
	}

	if(LIPM_imc>=30 && LIPM_imc<34.9){
		cout<<"Usted tiene obesidad tipo I"<<endl;
	}

	if(LIPM_imc>=35 && LIPM_imc<39.9){
		cout<<"Usted tiene obesidad tipo II"<<endl;
	}

	if(LIPM_imc>=40 && LIPM_imc<49.9){
		cout<<"Usted tiene obesidad tipo III (mórbida)"<<endl;
	}

	if(LIPM_imc>=50){
		cout<<"Usted tiene obesidad tipo IV (extrema)"<<endl;
	}
	return 0;
}