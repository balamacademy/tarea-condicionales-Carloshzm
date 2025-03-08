#include <iostream>
#include <math.h>

using namespace std;

int main (){
	int A = 0;
	int B = 0;
	int entero;
	int dividir;
	int division;
	
	cout << "Introduce el primer numero: "; 
	cin >> A;

	cout << "Introduce el segundo numero: ";
	cin >> B;

	dividir = A / B;

	if( "A / B = entero" ){
		cout << "La division es exacta\n";

	}else{
		cout << "La NO division es exacta\n";
	}

	return 0;
}