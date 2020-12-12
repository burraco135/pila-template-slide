#include <iostream>
#include "pila.h"

using namespace std;

int main() {
	// ----- Creazione oggetto Pila ----- //
  Pila<int> pila1;
	Pila<char> pila2;

	// ----- Test pilaVuota ----- //
	cout << "Controllo elementi pila..." << endl;
  if ( pila1.pilaVuota() ) {
		cout << "> La pila è vuota" << endl;
	}
	
	// ----- Test inPila ----- //
  pila1.inPila(5);
  pila1.inPila(6);
  
	// ----- Test pilaVuota ----- //
	cout << "Controllo elementi pila..." << endl;
	if ( !pila1.pilaVuota() ) {
		cout << "> C'è almeno un elemento nella pila" << endl;
	}
	
	// ----- Test fuoriPila (pop) ----- //
  pila1.fuoriPila();
  cout << "Valore elemento in testa: " << pila1.leggiPila() << endl;
  
	// ----- Test inPila ----- //
  pila1.inPila(4);
  pila1.inPila(7);

	// ----- Test stampPila ----- //
  pila1.stampaPila(pila1);

	// ------------------------- TEST PILA DI CHAR --------------- //

	// ----- Test pilaVuota ----- //
	cout << "Controllo elementi pila..." << endl;
  if ( pila2.pilaVuota() ) {
		cout << "> La pila è vuota" << endl;
	}
	
	// ----- Test inPila ----- //
  pila2.inPila('a');
  pila2.inPila('b');
  
	// ----- Test pilaVuota ----- //
	cout << "Controllo elementi pila..." << endl;
	if ( !pila2.pilaVuota() ) {
		cout << "> C'è almeno un elemento nella pila" << endl;
	}
	
	// ----- Test fuoriPila (pop) ----- //
  pila2.fuoriPila();
  cout << "Valore elemento in testa: " << pila2.leggiPila() << endl;
  
	// ----- Test inPila ----- //
  pila2.inPila('v');
  pila2.inPila('z');

	// ----- Test stampPila ----- //
  pila2.stampaPila(pila2);
	
	return 0;
}