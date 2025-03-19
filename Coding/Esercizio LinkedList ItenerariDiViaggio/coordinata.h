#ifndef COORDINATA_H
#define COORDINATA_H

class Coordinata {
	private:
		int gradi;
		int primi;
		int secondi;
		char ptoCardinale;
	public:
		Coordinata();
		Coordinata(int g, int p, int s, char pc);
		void setGradi(int g);
		void setPrimi(int p);
		void setSecondi(int s);
		void setPunto(char pc);
		int getGradi();
		int getPrimi();
		int getSecondi();
		char getPunto();
		void read();
		void write();
};

#endif