#include <iostream>
#include "pila.h"
#include "libro.h"

using namespace std;

int main() {
	// ----- Creazione oggetto Pila ----- //
  Pila<int> pila1;
	Pila<char> pila2;
	Pila<Libro> pila3;

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
	
	pila1.stampaPila(pila1);

	// ----- Test fuoriPila (pop) ----- //
  pila1.fuoriPila();
  cout << "Valore elemento in testa: " << pila1.leggiPila() << endl;
  
	// ----- Test inPila ----- //
  pila1.inPila(4);
  pila1.inPila(7);

	cout << "Valore elemento in testa: " << pila1.leggiPila() << endl;

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
	
	pila2.stampaPila(pila2);

	// ----- Test fuoriPila (pop) ----- //
  pila2.fuoriPila();
  cout << "Valore elemento in testa: " << pila2.leggiPila() << endl;
  
	// ----- Test inPila ----- //
  pila2.inPila('v');
  pila2.inPila('z');

	cout << "Valore elemento in testa: " << pila2.leggiPila() << endl;

	// ----- Test stampPila ----- //
  pila2.stampaPila(pila2);

	// ------------------------- TEST PILA DI LIBRI --------------- //

	// ----- Test pilaVuota ----- //
	cout << "Controllo elementi pila..." << endl;
  if ( pila3.pilaVuota() ) {
		cout << "> La pila è vuota" << endl;
	}

	/*
	libro.setTitolo("Libro 1");
	lista_libro.insLista(libro, indice_libro = lista_libro.succLista(indice_libro));
	*/

	// ----- Test inPila ----- //
	Libro libro;

	libro.setTitolo("Libro1");
  pila3.inPila(libro.getTitolo());
	libro.setTitolo("Libro2");
  pila3.inPila(libro.getTitolo());
	libro.setTitolo("Libro3");
  pila3.inPila(libro.getTitolo());

	// ----- Test pilaVuota ----- //
	cout << "Controllo elementi pila..." << endl;
	if ( !pila3.pilaVuota() ) {
		cout << "> C'è almeno un elemento nella pila" << endl;
	}
	
	pila3.stampaPila(pila3);

	// ----- Test fuoriPila (pop) ----- //
  pila3.fuoriPila();
  cout << "Valore elemento in testa: " << pila3.leggiPila() << endl;
  
	// ----- Test inPila ----- //
  libro.setTitolo("Libro10");
  pila3.inPila(libro.getTitolo());
	libro.setTitolo("Libro11");
  pila3.inPila(libro.getTitolo());

  cout << "Valore elemento in testa: " << pila3.leggiPila() << endl;

	// ----- Test stampPila ----- //
  pila3.stampaPila(pila3);
	
	return 0;
}