#include <iostream>

using namespace std;

int main(){
	float graus_f =0;
	float graus_c =0;
	
	cout<<"entre com a temperatura atual em graus celcius: ";
	cin>>graus_c;
	
	graus_f = (9* graus_c +160)/5;
	cout<<"o resultado da conversao e: "<< graus_f<<"°F";
}