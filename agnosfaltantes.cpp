#include <iostream>
using namespace std;

int main(){
	int agno_actual;
	int agno_cualquiera;
    
	cout << "Introduce el agno actual: ";
	cin >> agno_actual;
    
	cout << "Introduce un agno cualquiera: ";
	cin >> agno_cualquiera;
	
	int diferencia = agno_cualquiera - agno_actual;
    
	if (diferencia > 0) {
        cout << "Faltan " << diferencia << " agnos para llegar al agno " << agno_cualquiera;
		
		}else 
			if (diferencia < 0) {
          		cout << "Han pasado " << - diferencia << " agnos desde el agno " << agno_cualquiera;
    				

				}else{
        cout << "Estas en el agno " << agno_cualquiera;
    }

    return 0;
}
