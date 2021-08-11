#include <iostream>

using namespace std;

int main(){
	float kelvin =0;
	float graus_c =0;
	
	cout<<"entre com a temperatura atual em graus celcius: ";
	cin>>graus_c;
	
	kelvin = graus_c +273.15;
	cout<<"o resultado da conversao e: "<< kelvin<<" kelvin";
}