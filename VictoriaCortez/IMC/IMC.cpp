#include <iostream>
using namespace std;
int main () 
{
	float VCQ_imc,VCQ_peso,VCQ_altura;
	cout<<"Ingrese el peso (kg): ";cin>>VCQ_peso;
	cout<<"Ingrese la altura (metros): ";cin>>VCQ_altura;
	VCQ_imc=VCQ_peso/(VCQ_altura*VCQ_altura);
	if(VCQ_imc<18.5){
		cout<<"Usted tiene bajo peso"<<endl;
	}
	if(VCQ_imc>=18.5 && VCQ_imc<24.9){
		cout<<"Usted tiene peso normal"<<endl;
	}

	if(VCQ_imc>=25 && VCQ_imc<26.9){
		cout<<"Usted tiene sobrepeso grado I"<<endl;
	}

	if(VCQ_imc>=27 && VCQ_imc<29.9){
		cout<<"Usted tiene sobrepeso grado II"<<endl;
	}

	if(VCQ_imc>=30 && VCQ_imc<34.9){
		cout<<"Usted tiene obesidad tipo I"<<endl;
	}

	if(VCQ_imc>=35 && VCQ_imc<39.9){
		cout<<"Usted tiene obesidad tipo II"<<endl;
	}

	if(VCQ_imc>=40 && VCQ_imc<49.9){
		cout<<"Usted tiene obesidad tipo III (mórbida)"<<endl;
	}

	if(VCQ_imc>=50){
		cout<<"Usted tiene obesidad tipo IV (extrema)"<<endl;
	}
	return 0;
}