#ifndef DATA_H
#define DATA_H

class Data {
    private:
        int giorno, mese, anno;
    public:
        Data();
        Data(int giorno, int mese, int anno);
        ~Data();
        void setData(int giorno, int mese, int anno);
        int getGiorno();
        int getMese();
        int getAnno();
};

#endif DATA_H
