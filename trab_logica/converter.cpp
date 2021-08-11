#include<iostream>

using namespace std;

int main(){
	int numero_positivo;
	
	cout<<"entre com um numero positivo ou negativo e ele sera transformado em positivo";
	cin>>numero_positivo;
	
	if (numero_positivo<0){
		numero_positivo = numero_positivo * -1;
	}
	cout<<numero_positivo;
}
