#ifndef DATA_H
#define DATA_H

class Data {
    private:
        int giorno, mese, anno;
    public:
        Data();
        Data(int g, int m, int a);
        Data(const Data &d);
        ~Data();
        int getGiorno();
        int getMese();
        int getAnno();
        void setGiorno(int g);
        void setMese(int m);
        void setAnno(int a);
        void print();
        void read();
        int valida(); // 0 = non accettabile, 1 = accettabile;
    friend int confrontaDate(Data d1, Data d2); //0 = uguali, 1 = d1 antecedente, 2 = d2 antecedente.

};

#endif