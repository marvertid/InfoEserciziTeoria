#ifndef TAPPA_H
#define TAPPA_H

#include "coordinata.h"
#include <iostream>

using namespace std;

class Tappa {
	private:
		Coordinata latitudine;
		Coordinata longitudine;
		string nome;
		int tempo;
	public:
		Tappa();
		Tappa(Coordinata lat, Coordinata long, string n, int t);
		Coordinata getLat();
		Coordinata getLong();
		string getNome();
		int getTempo();
		void setLat(Coordinata lat);
		void setLong(Coordinata long);
		void setTempo(int t);
		void setNome(string n);
		float distanza(Tappa t);
		bool operator!=(Tappa t);
		Tappa& operator=(Tappa t);
	friend ostream& operator<<(ostream& out, Tappa& t);
	friend istream& operator>>(istream& in, Tappa& t);
};

#endif