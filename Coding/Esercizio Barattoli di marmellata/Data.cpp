#include "data.h"

Data::Data() {
    giorno = 0;
    mese = 0;
    anno = 0;
}
Data::Data(int giorno, int mese, int anno) {
    this->giorno = giorno;
    this->mese = mese;
    this->anno = anno;
}
Data::~Data() {

}
void Data::setData(int giorno, int mese, int anno) {
    this->giorno = giorno;
    this->mese = mese;
    this->anno = anno;
}
int Data::getGiorno() {
    return giorno;
}
int Data::getMese() {
    return mese;
}
int Data::getAnno() {
    return anno;
}