#include <iostream>

using namespace std;

int main(){
	
	float tempo_gasto = 0;
	int velocidade_media = 0;
	float distancia = 0;
	float litros_usados = 0;
	
	cout<<"Entre com o tempo gasto na viagem :";
	cin>>tempo_gasto;
	cout<<"Entre com a velocidade media da viagem: ";
	cin>>velocidade_media;
	
	distancia = tempo_gasto*velocidade_media;
	cout<<"A distancia total da sua viagem foi " <<distancia<<"km"<< " com uma velocidade media de "<<velocidade_media<<"km/h";
	cout<<"\n";
	cout<< "A sua viagem durou um total de "<<tempo_gasto<<" horas";
	litros_usados = distancia/12;
	
	cout<<"\n";
	cout<<"O total de litros usados foi de "<<litros_usados;
}