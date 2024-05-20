#ifndef DATA_H
#define DATA_H

#include <iostream>;
using namespace std;

class Data {
	private:
		int giorno, mese, anno;
	public:
		Data();
		Data(int giorno, int mese, int anno);
		~Data();
		int getGiorno();
		int getMese();
		int getAnno();
		void setGiorno(int giorno);
		void setMese(int mese);
		void setAnno(int anno);
		bool operator==(const Data& data);
		bool operator>(const Data& data);
	friend ostream& operator<<(ostream& out, const Data& data);
};

#endif
