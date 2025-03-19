#include "data.h"

Data::Data() {
	giorno = 1;
	mese = 1;
	anno = 1970;
}
Data::Data(int giorno, int mese, int anno) {
	this->giorno = giorno;
	this->mese = mese;
	this->anno = anno;
}
Data::~Data() {}

int Data::getGiorno() {
	return giorno;
}
int Data::getMese() {
	return mese;
}
int Data::getAnno() {
	return anno;
}
void Data::setGiorno(int giorno) {
	this->giorno = giorno;
}
void Data::setMese(int mese) {
	this->mese = mese;
}
void Data::setAnno(int anno) {
	this->anno = anno;
}
bool Data::operator==(const Data& data) {
	return (giorno == data.giorno && mese == data.mese && anno == data.anno);
}

bool Data::operator>(const Data& data) {
	if (anno > data.anno) {
		return true;
	}
	else if (anno == data.anno && mese > data.mese) {
		return true;
	}
	else if (anno == data.anno && mese == data.mese && giorno > data.giorno) {
		return true;
	}
	else {
		return false;
	}
}

ostream& operator<<(ostream& out, const Data& data) {
	out << data.giorno << "\\" << data.mese << "\\" << data.anno;

	return out;
}