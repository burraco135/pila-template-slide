#ifndef _LIBRO_H
#define _LIBRO_H

#include <string>
#include <iostream>

using namespace std;

class Libro {
	public:
		Libro() { titolo = ""; } // costruttore default
		Libro(string t) { setTitolo(t); } // costruttore copia

		void setTitolo(string t) { titolo = t; }
		string getTitolo() const { return(titolo); }
		bool operator==(Libro l) { return (getTitolo() == l.getTitolo()); }
		
	private:
		string titolo; // ogni oggetto libro ha un titolo
};

// sovraccarico output <<
std::ostream& operator<<(std::ostream& stream, const Libro& l){
	stream << l.getTitolo();
	return stream;
}

#endif //_LIBRO_H