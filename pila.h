#ifndef _PILA_H
#define _PILA_H

const int MAXLUNGH = 100;

using namespace std;

template <class T>
class Pila {
		
	public:
		typedef T tipoelem;

		Pila();
		Pila(int);
		~Pila();

		void creaPila();
		bool pilaVuota() const;
		tipoelem leggiPila() const;
		void fuoriPila();
		void inPila(tipoelem);
    void stampaPila(Pila<T>&);
	private:
		tipoelem *elementi;
		int testa;
		int lunghezza;
};

template <class T>
Pila<T>::Pila() {
	// dimensione standard della pila
	elementi = new tipoelem[MAXLUNGH];
	creaPila();
}

template <class T>
Pila<T>::Pila(int N) {
	// dimensione N della pila
	elementi = new tipoelem[N];
	lunghezza = N;
	creaPila();
}

template <class T>
Pila<T>::~Pila() {
	delete[] elementi;
}

template <class T>
void Pila<T>::creaPila() {
	testa = 0;
}

template <class T>
bool Pila<T>::pilaVuota() const {
	return ( testa == 0 );
}

template <class T>
T Pila<T>::leggiPila() const {
	return elementi[testa-1];
}

template <class T>
void Pila<T>::fuoriPila() {
	if ( !pilaVuota() ) {
		testa--;
	} else {
		cout << "Nessun elemento nella pila" << endl;
	}
}

template <class T>
void Pila<T>::inPila(tipoelem a) {
	if ( testa == MAXLUNGH ) {
		cout << "Raggiunta capacità massima della pila" << endl;
	} else {
		elementi[testa] = a;
		testa++;
	}
}

template<class T>
void Pila<T>::stampaPila(Pila<T> &p) {
	for (int i = 0; i < p.testa; i++) {
		cout << "|" << p.elementi[i] << "|" << endl ;
	}
	
	cout << endl;
}

#endif //_PILA_H