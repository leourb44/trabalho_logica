#include<iostream>

using namespace std;

int main(){
	float graus_f = 0;
	float graus_c = 0;
	float kelvin = 0;
	
	cout<<"entre com a temperatura atual em graus Fahrenheit: ";
	cin>>graus_f;
	
	graus_c = ((graus_f-32)*5)/9;
	cout<<"o resultado da conversao e: "<< graus_c<<"�C";
	
	kelvin = graus_c +273.15;
	cout<<"o resultado da conversao e: "<< kelvin<<" kelvin";
}
