#ifndef ORARIO_H
#define ORARIO_H
using namespace std;

class Orario {
    private:
        int ore, minuti, secondi;
    public:
        Orario();
        Orario(int ore, int minuti, int secondi);
        ~Orario();
        int getOre();
        int getMinuti();
        int getSecondi();
        void setOre(int ore);
        void setMinuti(int minuti);
        void setSecondi(int secondi);
        bool validaOrario();
    friend ostream& operator<<(ostream& outs, const Orario &newOrario);
    friend istream& operator>>(istream& ins, Orario &newOrario);
        bool operator==(const Orario &newOrario);
        Orario operator+(const Orario &newOrario);
        Orario& operator!();
        //Orario operator!(int);
    friend int intervalloSecondi(const Orario &newOrario1, const Orario &newOrario2); //restituisce il numero di secondi che intercorrono tra la prima e la seconda ora.

};

#endif